
//学习:
//1.和java一样要在main 中执行,和java一样返回类型.方法名  
//2.方法没有返回值就用void  
//3.这个顺序很重要 , 如果是方法在main后面就没法执行了 , 可以写头文件 #include "fuc.h" 插在前面就可以 ,像java中的类 
//4.运行程序后面的是.cpp 头文件是 .h (相当于接口)
//    
//    
//
// LS3Method.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
// #include "fuc.h"

/*
定义:函数指针是指向函数的指针变量，即本质是一个指针变量。
如:
int (*f) (int x);/ 声明一个函数指针*
func; /* 将func函数的首地址赋给指针f*

不但要给指针类型的变量 还要给参数类型
看下面代码 (*funcp)这个括号是一定要加的表示优先级, 看用法 funcp = point_func; 相当于就是把函数point_func直接给这个funcp
说明 funcp 直接指向一个函数 , 可以理解为他就代表这个函数 看用法  funcp(&a, &b);

int* a   int *a  写法是一样的 , 意思是一样的  
*/

void (*funcp)(int* a, int* b);

void point_func(int *a,int *b)
{
	*a = 200;
	printf("函数指针\n");
}

/*
指针函数是指带指针的函数，即本质是一个函数。函数返回类型是某一类型的定义:
指针
类型标识符*函数名(参数表)如:
int *f(x, y);
返回的还是指针:*p  
参数 void* 表示传入的就是 指针 void 类似于java的object 
看下面使用的时候 : int_add_func(&a); &就是一个取址符  ,能吧指针传入
指针就是指向内存地址的针
*/

int* int_add_func(void* wParam)
{
	printf("指针函数\n");
	int b = 10;
	int *p = &b;
	return p;
}

int main()
{
	int a = 10;
	int_add_func(&a);
	int b = 20;
	funcp = point_func;
	funcp(&a, &b);
	printf("a值 %d",a);

}

int func(void) {
	printf("函数");
	return -1;
}
int func(void* pathName, int a) {
	printf("函数");
	return -1;
}