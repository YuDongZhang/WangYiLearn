// LS1.cpp: 定义应用程序的入口点。
/*
结构体:类似于java bean ,

打印大小 看一下内存对齐 

结构体变量中成员的偏移量必须是成员大小的整数倍(被认为是任何数的整数倍)(1)
(2)结构体大小必须是所有成员大小的整数倍，也即所有成员大小的公倍数`

//共用体
1、定义:共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。您可以定义一个带有多成员的共用体，
但是任何时候只能有一个成员带有值。共用体提供了一种使用相同的内存位置的有效方式。
union Data{
	int i;
	float f;
	char str[20];
} data;
1、注意:共用体占用的内存应足够存储共用体中最大的成员。例如，在上面的实例中，Data将占用20个字节的内存空间，因为在各个成员中，
字符串所占用的空间是最大的。
下面的实例将显示上面的共用体占用的总内存大小:
*/
//

#include "LS113.h"

using namespace std;

struct Student
{
	short j;
	int i;
	short k;

} s1,s2;//就是变量声明 .类似于java private int a 

union MyStudent
{
	int i;
	short j;
};



int main() 
{
	struct Student student;
	student.i = 10;
	student.j = 5;

	s1.i = 10;
	s1.j = 5;
	printf("结构体大小%d   ", sizeof(student)); 

	union MyStudent myStudent;
	myStudent.i = 10;
	printf("之前 %d\n",myStudent.i);
	myStudent.j = 11;

	printf("i的地址  %#x\n",&myStudent.i);
	printf("j的地址  %#x\n",&myStudent.j);

	printf("之后 %d\n",myStudent.i);
	printf("之后 %d\n",myStudent.j);
	printf("共用体大小%d   ", sizeof(myStudent)); 


	system("pause");
	return 0;
	//打印之后看到会被覆盖
}
