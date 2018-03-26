#include <dlfcn.h>

using namespace std;


int main(){
	

    void* mylib = dlopen("./liblibexample.so", RTLD_LAZY);


	return 0;
}