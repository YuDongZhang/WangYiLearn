/*
虚析构函数
在C++中，不能把构造函数定义为虚构函数，因为在实例化一个对象时才会调用构造函数，切虚函数的实现本质上是通过一个虚拟函数指针表来调用的，还没有对象，没有内存空间当然无法调用
但析构函数可以是虚函数，且大多数时候都声明为虚构函数，这样就可以用基类的指针，指向派生类对象在释放时，可以根据实际指向的对象类型，动态联编子类的析构函数，来实现正确的内存释放

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/

#include <iostream>
using namespace std;

class A{
public:
    
    char  *str;
    
    A(){
        this->str=new char[100];
        cout<<"A的构造函数"<<endl;
        }
    
    ~A(){
        delete []str;
        cout<<"A的析构函数"<<endl;
    }
};

class B : public A{
public:
    char *str;
    
    B(){
        this->str=new char[100];
          cout<<"B的构造函数"<<endl;
    }
    
    ~B(){
        delete [] str;
        cout<<"B的析构函数"<<endl;
    }
    
};

int main(int argc, const char * argv[]) {
   
    A *p;
    p=new B();
    
    delete p;
    
    return 0;
}

/*
A的构造函数
B的构造函数
A的析构函数
我们可以看到基类中的析构函数没有加virtual,且基类和派生类中都有动态的内存开辟，当时只执行了基类的析构函数，不能正确的释放内存


*/