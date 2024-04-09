/*
C++中的异常处理
C++的异常处理和java的差不多都是用到了try,catch,throw三个关键字

*/


#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int a =0;
    int b=1;
    cout<<a<<"/"<<b<<endl;;
    try {
        if (a==0) {
            throw "a为0异常";
        }
    } catch (const char *str) {
        cout<<str<<endl;
    }
    return 0;
}

