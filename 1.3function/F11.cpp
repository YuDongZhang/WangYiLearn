#include <iostream>
using namespace std;
/*
继承和派生
C++继承和java继承概念相同，我们看下如何实现继承
*/

class A{
public:
    int a;
    
    void setA(int a){
        this->a=a;
    }
    
    void showA(){
        cout<<a<<endl;
    }
};

class B:public A{
public:
    int b;
    
    void setB(int b){
        this->b=b;
        }
    
    
    void showB(){
        cout<<b<<endl;
    }
    
};

int main(int argc, const char * argv[]) {
    B b;
    b.setA(1);
    b.setB(2);
    b.showA();
    b.showB();
    return 0;
}
