/*
 * @Author: your name
 * @Date: 2020-10-28 19:21:13
 * @LastEditTime: 2020-11-02 07:03:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /templete_study/project-1/study1.h
 */
#include <vector>
#include <stdexcept>
template <typename T>




class Stack{  
    private:
        std::vector<T> elems;
    public:
        
        void push(T const & value);
        T pop();
        T top() const;

};
template <typename T>
void Stack<T>::push(T const & value)
{
    elems.push_back(value);
};

template <typename T>
T Stack<T>::pop()
{
    if(elems.empty())
    {
        throw std::out_of_range("err");
    }
    T elem=elems.back();
    elems.pop_back();
    return elem;
};

template <typename T>
T Stack<T>::top() const{
    if(elems.empty())
    {
        throw std::out_of_range("err");
    }
    return elems.back();
};
