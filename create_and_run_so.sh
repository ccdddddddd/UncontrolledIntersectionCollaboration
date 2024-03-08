g++ main.cpp smoothSpeedLimitFun.cpp speed_limit.cpp SmoothSpeedLimit.cpp -o main -losqp -lpthread -ldl -I/opt/osqp/osqp_lib/include/osqp/ -L/opt/osqp/osqp_lib/lib64
./main

g++ smoothSpeedLimitFun.cpp speed_limit.cpp SmoothSpeedLimit.cpp -fPIC -shared -o smoothSpeedLimitFun.so -losqp -lpthread -ldl -I/opt/osqp/osqp_lib/include/osqp/ -L/opt/osqp/osqp_lib/lib64
g++ Load.cpp -ldl -o Load
./Load
python3 loadSmoothSpeedLimitFun.py

