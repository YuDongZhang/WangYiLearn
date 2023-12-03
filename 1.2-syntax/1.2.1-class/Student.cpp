/*

*/

#include "Student.h"

Student* Student::instance = 0;//表示instance 属于 student

Student* Student::getInstance() {
    if (!instance) {
        instance = new Student();
    }
    return instance;
}

