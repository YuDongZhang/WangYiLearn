#include <iostream>
#include "extends.h"
using namespace std;

/*
一个函数被另一个函数调用的时候才会有生命，才会为其准备相应的空间，在调用完毕之后才会清理释放结束
可以看到每一次的函数调用都会带来一些空间上的花销
定义一个函数的作用，也是为了提高代码的重用性，可以在需要的时候调用，提高开发效率，那么一个代码本身就不多，
又被频繁调用的函数，这样做是否合算呢？
C++已经考虑到了这个问题，为我们提供了内联机制，即仍然是使用自定义函数，但是编译的时候，把函数代码插入到函数调用的地方，
 就像普通的程序执行代码一样，来解决这个问题

*/
inline int max1(int x,int y){
    return x>y?x:y;
}

int main(){
    Child child;
    child.test();
    cout << "   hello   " << endl << " hi " << " hhah "<<endl<<" abc "<<endl;

    cout<<max1(12, 2)<<endl;
    
    cout<<max1(2, 13)<<endl;
}


//类的定义 
class Status{
public:
    int a;
    char name[100];
    int socre;
    int print(){
        cout<<a<<"/"<<name<<"/"<<socre<<endl;
        return 0;
    }
};

//类定义的第二种形式 
//这种形式成员函数，仅仅在类内声明函数原型，再类外定义函数体，在类外定义函数体的需要类名加上  ：：  域限定符
class Sts{
public:
    int a;
    char name[100];
    int socre;
    int print();
};

int Sts::print(){
     cout<<a<<"/"<<name<<"/"<<socre<<endl;
    return 0;
}


