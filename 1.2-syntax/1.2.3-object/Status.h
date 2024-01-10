#include <iostream>
using namespace std;

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
