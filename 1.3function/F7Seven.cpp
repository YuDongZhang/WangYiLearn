#include <iostream>
using namespace std;

/*

C++中常数据使用及其初始化
被关键字const修饰的变量，是不可修改和改变的，他除了可以修饰变量还可以修饰对象为常对象，修饰类的成员和成员函数，
分别叫做类的常数据成员和常成员函数
常数据成员
使用格式
复制代码数据类型 const  数据成员名;

或 const  数据类型 数据成员名;

被const修饰的变量必须初始化并且不可以被修改

而初始化的方式是在构造函数中初始化，C++11支持后支持直接初始化

另外一种情况如果是static变量，初始化需要在类外初始化

*/


class A{
public:
    const int a;
    int b;
    
    A(int a):a(a){
        b=2;
    }
    
    void print(){
        
    }
    
     void print1() const{
        cout<<a<<"/"<<b<<endl;
    }
};

int main(int argc, const char * argv[]) {
    const A a(1);
    const A a1(2);
    //编译失败，常对象不能被赋值
    //a=a1;
    //此处编译失败，常对象不能调用非常成员函数
    //a.print();
    a.print1();
    return 0;
}
