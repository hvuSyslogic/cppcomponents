#include "cross_compiler_interface/cross_compiler_interface.hpp"
#include "cross_compiler_interface/cr_string.hpp"

using namespace cross_compiler_interface;


template<class T>
struct TestInterface1:public cross_compiler_interface::define_interface<T>{
	cross_function<TestInterface1,0,void()>f0;
	cross_function<TestInterface1,1,int()> f1;
	cross_function<TestInterface1,2,int(int)> f2;
	cross_function<TestInterface1,3,std::string()>f3;
	cross_function<TestInterface1,4,void(std::string)>f4;


	TestInterface1():f0(this),f1(this),f2(this),f3(this),f4(this){
	}


};


struct VirtualInterface:public portable_base{
	virtual void f0() = 0;
	virtual int f1() = 0;
	virtual int f2(int) = 0;
	virtual std::string f3() = 0;
	virtual void f4(std::string) = 0;
};