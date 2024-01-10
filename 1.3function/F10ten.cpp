#include <iostream>
using namespace std;
/*
常成员函数
一个类中的成员函数被const修饰后,就变成了常成员函数
定义如下
返回类型 函数名（形参表列）const；
需要注意的是

常成员函数的定义和声明都需要包含const
长城园函数只能调用常成员函数，而不能调用非常成员函数，可以访问但不可以更改非常成员变量

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

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
         //此处编译错误，常成员函数不可以改变非常成员变量
//         b=3;
         //此处编译错误，常成员函数不可以调用非常成员变量
//         print();
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
