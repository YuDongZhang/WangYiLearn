#include <iostream>
using namespace std;
class  Student
{
    public:
        Student()  //构造函数
        {
            age_ = 28;
            height_ = 175.0;
            weight_ = 65.5;// 在构造函数中对变量进行初始化；
            int size_name = sizeof("xiaoming");
            name_ = (char*)malloc(size_name+1);// 在构造函数中对资源进行分配
            cout << "调用构造函数"<< endl;
        }
        ~Student()
        {
            if(name_ != NULL)
            {
                free(name_);// 在析构函数中对资源进行释放；
                name_ =   NULL;
            }
            cout << "调用析构函数" << endl;
        }

    private:
        int age_;
        float height_;
        float weight_;
        char* name_;

};

int main()
{
    Student a_student;
}