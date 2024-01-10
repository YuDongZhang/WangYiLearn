/*
虚基类和虚基类的使用
我们看下多继承的情况
*/

#include <iostream>
using namespace std;

class A{
public:
    int b;
};

class B:public A{
    
};

class C:public A{
    
};

class D :public B,public C{
    
};

int main(int argc, const char * argv[]) {
    D d;
    //在这里编译报错，D继承了俩份b变量
//    d.b=8;
    return 0;
}
