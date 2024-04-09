#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    const char *name="测试测试测试";
    ofstream out;
    out.open("C:/Users/Shinelon/Desktop/test1.txt");
    out<<name;
    out.close();
    return 0;
}
