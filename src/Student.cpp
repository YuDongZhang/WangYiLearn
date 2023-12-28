/*
Student::instance  这个就表明 , instance 属于 Student
*/

#include "Student.h"

Student* Student::instance = 0;//表示instance 属于 student

Student* Student::getInstance() {
    if (!instance) {//非零 
        instance = new Student();
    }
    return instance;
}

