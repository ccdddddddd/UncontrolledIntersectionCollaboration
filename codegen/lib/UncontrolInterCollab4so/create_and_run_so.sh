g++ UncontrolInterCollab4so.cpp -fPIC -shared -o UncontrolInterCollab4so.so 
g++ Load.cpp -ldl -o Load
./Load

