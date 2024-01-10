#include <iostream>
#define AA 3.999
using namespace std;
//拷贝函数 
//在C++中，与类同名，且形参是本类对象的引用类型函数，叫做拷贝构造函数，与构造函数一样，如果我们不主动定义，
//那么系统会自动生成一个，进行俩个对象成员之间的赋值，用来初始化一个对象

class Status{
public:
    int a ;
    int b ;
    
    Status(int a,int b);
    Status(Status &A);
    
};

Status::Status(int a,int b){
    this->a=a;
    this->b=b;
    cout<<a<<"/"<<b<<endl;
}

Status::Status(Status &A){
    this->a=A.a;
    this->b=A.b;
    cout<<"拷贝k函数"<<a<<"/"<<b<<endl;
}

//第一次定义的对象是用带参的构造函数，第二次定义的对象，使用第一次的对象来进行初始化所以调用拷贝构造函数

int main(int argc, const char * argv[]) {
    
    Status st(1,2);
    Status sts(st);
    
    return 0;
}
