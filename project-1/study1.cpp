/*
 * @Author: your name
 * @Date: 2020-10-28 19:09:27
 * @LastEditTime: 2020-10-28 19:46:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /code/templete_study/project-1/study1.cpp
 */
#include <iostream>
#include <string>
#include "study1.h"
using namespace std;
int main(int argc, char const *argv[])
{
    try
    {
        Stack<int> intStack;
        Stack<string> stringStack;
        intStack.push(7);
        std::cout << intStack.top()  << std::endl;
        stringStack.push("hell world");
        std::cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception: "<<e.what() << '\n';
    }
    
    std::cout << "/* message */" << std::endl;
    return 0;
}
