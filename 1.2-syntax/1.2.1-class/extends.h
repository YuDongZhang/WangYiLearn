#pragma once
#include <iostream>

//endl是换行用的 

class Parent
{
public:
    void test(){
        std::cout << "  my test()   " << std::endl ;
    }
};

class Parent1
{
    // void test(){
    //         std::cout << "  my test()1   " << std::endl ;
    //     }

};

//如果不写就是私有的 , 加 ,  可以多重继承 
class Child : public Parent , Parent1{
        
};


