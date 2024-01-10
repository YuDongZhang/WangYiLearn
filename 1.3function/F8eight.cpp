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

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/


class A{
public:
    //可以直接初始化
    const int a = 0;
    const int b;
    const int c;
    static int d;
    //静态常量可以在类内初始化
    static const int e = 4;
    //在构造方法初始化
    A(int b,int c):b(b),c(c){
        
    }
    
    void print(){
        cout<<a<<"/"<<b<<"/"<<c<<"/"<<d<<"/"<<e<<"/"<<endl;
    }
};
//静态变量再类外初始化
int A::d =3;


int main(int argc, const char * argv[]) {
    A a(1,2);
    a.print();
    return 0;
}
