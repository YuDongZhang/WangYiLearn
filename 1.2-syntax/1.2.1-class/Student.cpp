/*

*/

#include "Student.h"

Student* Student::instance = 0;//表示instance 属于 student

Student::Student() {
    // 构造函数的实现
}

Student::~Student() {
    // 析构函数的实现
}

Student* Student::getInstance() {
    if (!instance) {
        instance = new Student();
    }
    return instance;
}

