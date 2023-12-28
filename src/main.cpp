/*

Student::getInstance() 相当于类名 . 方法 , 看java 



*/

#include <iostream>
#include "Student.h"
// #include "Teacher.h"

// using namespace std;

//下面的是方法的重载 
void func(int a){

}

void func(float a){

}


class Teacher
{
    int i;
private:
    int j;

public:
    Teacher(){

    };
    ~Teacher(){

    };
    
};

int main(){
    Student* student = Student::getInstance();
    // std::cout << "hello world";
    // Teacher teacher;
    std::cout<< "heoll world \n";
 
}

