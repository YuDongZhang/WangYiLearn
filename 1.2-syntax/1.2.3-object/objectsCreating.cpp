 #include  "Status.h"   //这里要用双引号 , 或者尖括号 
 #include <cstring> // 添加这行来包含cstring头文件
using namespace std;  
   
 /*
 和malloc函数一样，new也是在堆区分配内存，必须手动释放，否则只能等到程序运行结束才可以释放，为了避免内存泄露，
 new和delete，new[]和delete[]操作成对出现，并且不要和C语言中的malloc和free混用
 */

int main(){

   int *a=  new int;//分配一个int类型的内存空间；
   delete a;//释放内存；
    
    //分配10个int数据空间
   int *aa= new int[10];
   delete []aa;

    //对象创建
    Status st;
    st.a=1;
    st.socre=100;
    strcpy(st.name, "wang");

    st.print();

    //2 对象指针
    Sts *p;
    Sts s;
    
    s.a=100;
    s.socre=200;
    strcpy(s.name, "xin");
    
    p=&s;

    p->print();

    //指针可以通过->来访问成员变量和方法

    //传递参数的时候建议使用指针来传递，因为传递的是地址，不会进行对象间的副本赋值，从而提高效率，减少内存开销


    //3 对象的引用 
    //引用C++中的新的类型，对象的引用是一个对象的别名，本质上也是把对象的地址赋值给了这个引用类型，俩者指向同一块内存空间
    Status s1;
    Status &s2 = s1;
    //定义一个Student的对象，然后用&符号定义一个该类型的引用类型，并把A对象赋值给Aq初始化
    // 需要注意的是：

    // 与指针一样，需要同类型才可以赋值
    // 除非做函数的返回值或形参，其余定义引用类型的同时就要初始化
    // 引用类型并不是建立一个新的对象，因此不会调用构造函数

    s2.print();
    


    return 0 ;
}