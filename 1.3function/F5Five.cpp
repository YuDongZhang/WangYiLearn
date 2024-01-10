#include <iostream>
using namespace std;

//友元类和友元函数一样,如下

class  Status{
private:
    int a;
    int b;
    
public:
    Status(int a,int b){
        this->a=a;
        this->b=b;
    };
    
    friend class A;
};

class A{
public:
    void print(Status &st){
        cout<<st.a<<"/"<<st.b<<endl;
        }
};

int main(int argc, const char * argv[]) {
    
    Status st(1,2);
    A a;
    a.print(st);
    
    return 0;
}
