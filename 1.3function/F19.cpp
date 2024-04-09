#include <iostream>
using namespace std;

class A{
public:
    
    char  *str;
    
    A(){
        this->str=new char[100];
        cout<<"A的构造函数"<<endl;
        }
    
    virtual ~  A(){
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
B的析构函数
A的析构函数
这样就可以正确的释放内存


*/