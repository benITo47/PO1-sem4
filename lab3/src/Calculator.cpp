#include "Calculator.h"
#include <functional> 
#include <iostream> 

Calculator::Calculator():value(0){}


Calculator::Calculator(int val):value(val){}


 Calculator& Calculator::operator=(int val)
 {
     value = val;
     return *this;
 }

 Calculator& Calculator::operator++()
 {
     value++;
     return (*this);
 }
 Calculator& Calculator::operator--()
 {
     value--;
     return(*this);
 }


 int Calculator::operator++(int val)
 {
     value++;
     return value-1;
 }

int Calculator::operator--(int val)
{
    value--;
    return value+1;
}


 Calculator& Calculator::operator()()
 {
     return *this;
 }


 int Calculator::operator()(std::function<int(int)> func)
 {
     return func(value);
 }


 int Calculator::operator()(std::function<int(int,int)> func, int val1)
 {
     return func(value,val1);
 }


 int Calculator::operator*(int multiplier)
 {   
     value *= multiplier;
     return value;
 }



std::ostream& operator<<(std::ostream& os, Calculator object)
{
    os << object.value;
    return os;
}   

int operator*(int multiplier, Calculator& object)
{
    object.value *= multiplier;
    return object.value;
}