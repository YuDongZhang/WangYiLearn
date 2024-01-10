/*
派生类的析构函数
基类的析构函数也不可能以被继承，其调用顺序为，子类析构函数->基类析构函数，和构造的函数的调用顺序相反
*/

#include <iostream>
using namespace std;

class A{
public:
    
    ~A(){
        cout<<"父类的析构函数"<<endl;
    }
};

class B:public A{
public:
    
    ~B(){
        cout<<"子类的析构函数"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    B b;
    return 0;
}
