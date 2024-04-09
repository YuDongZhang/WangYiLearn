/*
在函数前面加上virtual关键字，就是虚函数

有什么作用
虚函数的出现允许函数，在调用时与函数体的联系在运行时建立，就是所谓的动态联编，那么在虚函数的派生类在运行的时候，
就可以根据动态联编实现执行一个方法，却又不同的效果，这就是多态，可以解决上节遇到的问题
我们只需要把基类中的函数变成虚函数就可以了，如下

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/

#include <iostream>
using namespace std;

class A{
public:
    virtual void print(){
        cout<<"A"<<endl;
    };
};

class B : public A{
public:
    void print(){
        cout <<"B"<<endl;
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

/*
A
B
B
B
这次的输出就符合我们的期望，这就是多态
需要注意的是

虚函数不能是静态成员函数，或友元函数，因为他们不属于某个对象
内联函数不能运行中动态指定其位置，及时虚函数在类内定义，编译时，仍将看做非内联
构造函数不能是虚函数，析构函数可以是虚函数，而且通常声明为虚函数

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。




*/