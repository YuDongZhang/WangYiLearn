#include <iostream>
#include <cstring>
using namespace std;

/*
所以当类中有指针类型，依靠默认的拷贝方发，已经不能满足我们的需求，定义一个特定的拷贝构造函数，不仅进行数据的拷贝，
还要为成员分配空间，这就叫做深拷贝，也就是深拷贝构造函数
*/

class Status{
public:
    int a;
    int b;
    char *str;
    
    Status(int a,int b,char *str);
    ~Status();
    Status(Status &A);
    void print();
    
};

Status::Status(int a,int b,char *str){
    this->a=a;
    this->b=b;
    this->str=new char[strlen(str)+1];
    strcpy(this->str, str);
}

Status::~Status(){
    delete []str;
}

Status::Status(Status &A){
    this->a=A.a;
    this->b=A.b;
    this->str=new char[strlen(A.str)+1];
    strcpy(this->str, A.str);
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
