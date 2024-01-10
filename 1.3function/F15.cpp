/*
解决这种情况需要虚基类

所谓的虚基类就是在继承的public之前加上virtual关键字，只要加上这个关键字派生类就维护一份基类对象，避免多次拷贝，出现歧义
*/
#include <iostream>
using namespace std;

class A{
public:
    int b;
};

class B:virtual public A{
    
};

class C:virtual public A{
    
};

class D :public B,public C{
    
};

int main(int argc, const char * argv[]) {
    D d;
    d.b=8;
    return 0;
}
