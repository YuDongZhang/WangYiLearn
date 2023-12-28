
//引入头文件实现构造方法
#include "Teacher.h"
#include <iostream>
//这个是用来打印的 , 用命名空间 std   end1换行 
using namespace std;

/*
说明: 这种传入一个 i 赋值给 i 
Teacher::Teacher(int i,int j)
{
    this->i = i;

或者 : i 默认赋值给 i
Teacher::Teacher(int i,int j)::(i) 

*/

//创建的时候调用此申请一块内存区域
Teacher::Teacher()
{

    cout<< "我是老师 构造方法" << endl;
}

//释放的时候调用这个 //系统自动进行调用
Teacher::~Teacher()
{
    cout<< "我是老师 析构方法" << endl;
}
