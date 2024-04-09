/*
可以看到所有的异常都是基于exception基类，他下面有俩大子类logic_error和runtime_error分别代表逻辑异常和运行时异常
举例说明：

当我们new一个对象，内部不足，会抛出bad_alloc异常
当我们使用string类，下标越界会抛出out_of_range异常

注意使用C++自带的异常类需要导入对应的头文件
bad_alloc类在头文件new中定义
bad_typeid类在头文件typeinfo中定义
ios_base::failure类在特批文件ios中定义
其他异常类在stdexcept中定义
例子如下：

作者：renxhui
链接：https://juejin.cn/post/6844904160031145992
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/

#include <iostream>
#include <new>
#include <stdexcept>
using namespace std;

int main(int argc, const char * argv[]) {
    string *s;
    
    try {
       s = new string("123456");
        cout<<s->substr(7,3);
    } catch (bad_alloc &t) {
       cout<<"异常:"<<t.what()<<endl;
    }catch(out_of_range &t){
        cout<<"异常:"<<t.what()<<endl;
    }
    return 0;
}
