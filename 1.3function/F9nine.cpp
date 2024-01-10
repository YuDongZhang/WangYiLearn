/*
常对象
C++中可以把一个对象声明成const类型,成为常对象，这样声明后，这个对象整个声明周期都不可以被更改，所以定义的时候需要在构造函数初始化；
定义的格式如下
复制代码类型 const 对象名;

或 const 类型 对象名;

需要注意的是常对象只能访问，常成员函数，不能访问非常成员函数

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/

#include <iostream>
using namespace std;

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
//    a=a1;
    //此处编译失败，常对象不能调用非常成员函数
//    a.print();
    a.print1();
    return 0;
}
