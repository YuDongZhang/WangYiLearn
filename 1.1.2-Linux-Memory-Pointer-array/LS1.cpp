﻿// LS1.cpp: 定义应用程序的入口点。
//逻辑角度:内存是一块具备随机访问能力，支持读、写操作，用来存放程序及程序运行中产生的数据的区域。
//理解 : 对象的地址就是内存地址 
//内存对象 
//c内存 :运行时系统分配空间堆栈  编译时编译器分配的空间 bss段 :编译时全局的成员变量,无法确定大小. 数据段:数据 代码段:就是代码
//
/*
int* p = &arr[0]  *p = 400 第一个元素改成400 , *(p+1)就是第二个参数 

指针数组就是数组里的每个元素都是指针 

符号的优先级 () > [] > *


*/

#include "LS1.h"

using namespace std;

int main() 
{

	int arr[] = { 100,200,300 };
	
	int *p[3];//指针数组

	//这里就是做个对应 
	for (int i = 0; i < 3; i++)
	{
		p[i] = &arr[i];

	}
	printf("-------操作后-------\n");
	for (int i = 0; i < 3; i++)
	{
		printf("数组%d\n", *p[i]);
	}
	system("pause");
	return 0;
}
/*
数组指针(也称为行指针) 
定义: int (*p)[n]
优先级高，首先说明p是一个指针，指向一个整型的一维数组，这个一维数组的长度是n,也可以说是p的步长。
也就是说执行p+1时，p要跨过n个整型数据的长度。
int a[3][4];
int(*p)[4];//该语句是定义一个数组指针，指向含4个元素的一维数组
p=a;//将该二维数组的首地址赋给p，也就是 a[0]或者&a[0][0]
p++;//该语句执行过后，也就是p=p+1;p跨过行a[0][]指向了行a[1][]

理解:类似于函数指针
*/