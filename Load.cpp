#include <iostream>
#include <algorithm>
#include<string.h>
#include<math.h>
#include <dlfcn.h>

// Type Definitions
struct struct1_T {
	double vMin;
	double vMax;
	double aMin;
	double aMax;
	double dt;
	double kGen;
	double kp;
	double kv;
	double D;
};

struct struct0_T {
	double values[20];
};

int main()
{
	// 创建网联车状态数据变量
	double numOfVehs = 10;
	double dis2center[20] = {
			{92.3000, 102.3000, 117.3000, 122.3000, 132.3000, 142.3000, 152.3000, 162.3000, 172.3000, 182.3000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000,
			-99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000}
	};
	double velocity[20] = { 10, 10, 6, 10, 10, 10, 10, 10, 10, 10, -99, -99, -99, -99, -99, -99, -99, -99, -99, -99 };
	double accel[20] = {2.6000, 2.6000, 2.6000, 2.6000, 2.6000, 2.6000, 2.6000, 2.6000, 2.6000, 2.6000,
		-99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000, -99.0000};
	double vTarget[20];

	// 创建标定量
	struct1_T calibrationVars = {
		3,          // vMin
		20,         // vMax
		-3,         // aMin
		1.5000,     // aMax
		0.2000,     // dt
		2,          // kGen
		0.2500,     // kp
		0.7000,     // kv
		30          // D
	};
	struct0_T pConflict;

	// 创建车辆冲突关系变量
	double inputSubsets[][10] = {
		{}, // pConflict[0]，无数据
		{}, // pConflict[1]，无数据
		{1, 2}, // pConflict[2]
		{1},     // pConflict[3]
		{1, 2}, // pConflict[4]
		{1, 3, 4, 5}, // pConflict[5]
		{1, 3, 4, 5}, // pConflict[6]
		{1, 3, 5}, // pConflict[7]
		{1, 2, 3, 4, 5, 6, 7}, // pConflict[8]
		{6, 7} // pConflict[9]
	};
	for (int i = 0; i < 10; ++i) {
		int subsetSize = sizeof(inputSubsets[i]) / sizeof(inputSubsets[i][0]);
		std::memcpy(pConflict[i].values, inputSubsets[i], subsetSize * sizeof(double));
		std::memset(pConflict[i].values + subsetSize, -99, (20 - subsetSize) * sizeof(double));
	}

	// so的链接
	void* handle = dlopen("./UncontrolInterCollab4so.so", RTLD_LAZY);
	if (!handle) {
		fprintf(stderr, "%s\n", dlerror());
		exit(1);
	}
	printf("lib loaded\n");
	void(*myFn)(double, const double[20], const double[20], const double[20], const struct0_T[20], const struct1_T*, double[20])
		= (void(*) (double, const double[20], const double[20], const double[20], const struct0_T[20], const struct1_T*, double[20)) dlsym(handle, "UncontrolInterCollab4so");
	if (myFn == NULL) {
		printf("err\n");
		return -1;
	}

	// so的调用
	myFn(numOfVehs, dis2center, velocity, accel, pConflict, &calibrationVars, vTarget);

	// 打印vTarget的内容
	for (int i = 0; i < static_cast<int>(std::round(numOfVehs)); ++i) {
		std::cout << "vTarget[" << i << "] = " << vTarget[i] << std::endl;
	}

	return 0;

	/* 调用结果示例
	vTarget =
    10.3000   10.3000    6.3000   10.3000   10.3000    9.4000   10.3000   10.3000    9.4000   10.3000
	*/
}