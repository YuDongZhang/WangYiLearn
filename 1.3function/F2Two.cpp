#include <iostream>
#include <cstring>
using namespace std;

/*
这段代码执行起来会有问题，原因是，默认拷贝函数，只是this.str->str简单的赋值，俩个对象指向了同一个地址，
并没有为新的对象开辟新的空间，这已经违背了我们的初衷，俩个对象销毁时都会调用析构函数，释放这段代码的内存空间，
由于对象调用俩次，delete了俩次，就会报错
复制代码浅拷贝和深拷贝(47128,0x1000ac5c0) malloc: *** error for object 0x100595040: pointer being freed was not allocated
所以当类中有指针类型，依靠默认的拷贝方发，已经不能满足我们的需求，定义一个特定的拷贝构造函数，不仅进行数据的拷贝，
还要为成员分配空间，这就叫做深拷贝，也就是深拷贝构造函数
复制代码

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


*/

class Status{
public:
    int a;
    int b;
    char *str;
    
    Status(int a,int b,char *str);
    ~Status();
    void print();
    
};

Status::Status(int a,int b,char *str){
    this->a=a;
    this->b=b;
    this->str = new char[strlen(str)+1];
    strcpy(this->str, str);
}

Status::~Status(){
    delete []str;
}

void Status::print(){
    cout<<a<<"/"<<b<<"/"<<str<<endl;
}

int main(int argc, const char * argv[]) {
    char *pp="2we";
  
    Status st(1,2,pp);
    st.print();
    
    Status ss(st);
    ss.print();
    return 0;
}
