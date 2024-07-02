#ifndef COMPLEX_OPERATIONS_H
#define COMPLEX_OPERATIONS_H

#include<iostream>
#include <vector>
#include "Complex.h"




template <typename T>
T* add(T* a, T* b){
    T* result = new T;
    *result = *a + *b; 
    return result;
}

template<typename T>
std::vector<int>* add(std::vector<int> *a, std::vector<int> *b)
{       
    std::vector<int>* result = new std::vector<int>;
    if(a->size() != b ->size())
    {
        return nullptr;
    }
    else
    {   auto a_unref = *a; 
        auto b_unref = *b;
        for(int i = 0; i < a->size(); i++)
        {
            result->push_back( a_unref[i] + b_unref[i]);
        }
        return result;
    }
}




template<typename T>
T* multiply(T* a, T* b)
{
    T* result = new T(*a * *b);
    return result;
}


#endif