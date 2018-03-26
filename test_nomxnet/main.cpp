#include <iostream>
#include <dlfcn.h>
#include <cstdint>

using namespace std;


int main(){

    void* mylib = dlopen("./liblibexample.so", RTLD_LAZY);
    

    cout << "dlopen exited correctly";
	return 0;
}