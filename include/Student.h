//
// Created by Shinelon on 2021/9/25.
//
/*
#pragma once 保证只是引入一次 
#pragma once 很多编译器不支持 , 所以用下面这个

//下面的代码是定义宏 , 表示只引入一次 
#ifndef WANGYI01_BASE_STUDENT_H  // WANGYI01_BASE_STUDENT_H 就是变量
#define WANGYI01_BASE_STUDENT_H

#endif 

//不同的作用域 放不同的方法 
*/

#ifndef WANGYI01_BASE_STUDENT_H
#define WANGYI01_BASE_STUDENT_H



class Student {//类和java一样都是 class 

private://私有的作用域 
    static Student* instance;
    Student();
    ~Student();//析构函数 

public://公用作用域 
    static Student* getInstance();
};


#endif //WANGYI01_BASE_STUDENT_H