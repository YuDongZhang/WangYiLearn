#include <iostream>
using namespace std;

/*
友元函数
我们知道类内的私有变量，只能在类内访问，类外不能访问，假如我们需要再类外访问私有变量，那我们该怎么办呢？
我们可以利用友元函数，把外部的函数声明为友元类型，赋予它可以在类外访问类的私有变量
友元函数既可以是全局函数，也可以是其他类的成员函数，不仅如此，友元还可以是一个类，叫做友元类
怎么使用？
对于友元函数只需要在类中对函数进行声明，并在之前加上friend关键字,这个函数就有了独特的权限
需要注意的是，友元函数并不属于类，不可以用this指针，同时也不可以被继承

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/

class Status{
private:
    int a;
    int b;
    
public:
    Status(int a,int b){
        this->a=a;
        this->b=b;
    };
    
    friend void print(Status st);
};

void print(Status st){
    cout<<st.a<<"/"<<st.b<<endl;
}

int main(int argc, const char * argv[]) {
    Status st(1,2);
    print(st);
    return 0;
}
