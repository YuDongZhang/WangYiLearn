/*
多态的概述
指同样的方法被不同的对象执行时会有不同的效果
多态的实现又分为俩种，编译时多态和运行时多态，前者是编译时就确定了操作过程，后者是程序运行之中才确定了操作过程，
这种操作过程就是联编，也称为绑定
联编在编译链接时确认的，叫做静态联编，之前遇到的函数重载和函数模板就属于这一类
在运行时才确定执行那段代码的，就做动态联编
静态联编在编译时就确定说以效率比较高，动态联编虽然慢些但比较灵活，各有优点
静态联编的例子

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

#include <iostream>
using namespace std;

class A{
public:
    void print(){
        cout<<"A"<<endl;
    }
};

class B:public A{
public:
    void print(){
        cout<<"B"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    A a;
    a.print();
    B b;
    b.print();
    
    A *p;
    p=&b;
    p->print();
    
    A &pp=b;
    pp.print();
    
    
    return 0;
}
