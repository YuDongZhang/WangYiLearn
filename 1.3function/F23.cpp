/*

C++中对于文件的操作主要基于以下类
ofstream写操作（输出）文件类（由ostream引申而来）
ifstream读操作（输入）文件类（由istream引申而来）
fstream可同时读写文件类（由iostram引申而来）
他们都需要包含头文件
复制代码#include <fstream>

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。



C++如何打开文件
这里需要用到fstream的open函数，实现打开文件的操作，他的原型如下
复制代码void open(const char *filename, ios::openmode mode);
第一个参数表示打开文件的路径
第二参数表示打开的模式



参数
作用




ios::in
为输入(读)而打开文件


ios::out
为输出(写)而打开文件


ios::ate
初始位置：文件尾


ios::app
所有输出附加在文件末尾


ios::trunc
如果文件已存在则先删除该文件


ios::binary
二进制方式



除此之外还可以通过|符号将多个参数进行使用
复制代码1 ofstream out;  
2 out.open("dotcpp.txt", ios::out|ios::binary)  //以二进制模式打开，进行写数据
C++读文件的操作
C++输入输出用到了iostream头文件代表io流，这次学习的读文件，尤其是流，文件流，要包含fstream头文件，它定义了三个类分别负责，读，写，读写操作



类型
意义




ofstream
(out) 表示输出文件流，用于创建文件并向文件写入信息。


ifstream
(in)表示输入文件流，用于从文件读取信息。


fstream
(file)表示文件流，且同时具有 ofstream 和 ifstream 两种功能，这意味着它可以创建文件，向文件写入信息，从文件读取信息。

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, const char * argv[]) {
    char data[100];
    ifstream in;
    in.open("C:/Users/Shinelon/Desktop/test.txt");
    in>>data;
    cout<<data<<endl;
    in.close();
    return 0;
}
