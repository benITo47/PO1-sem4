#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>

class Complex 
{
    public:
        Complex(){};
        Complex(Complex& other)
        {
            _realFactor = other._realFactor;
            _imaginaryFactor = other._imaginaryFactor;
        }
        Complex(double real, double imaginary):_realFactor(real), _imaginaryFactor(imaginary){}

            double getReal(){return _realFactor;}
            double getImaginary(){return _imaginaryFactor;}

        Complex operator+(Complex other)
        {   return Complex(
            _realFactor + other._realFactor,
            _imaginaryFactor + other._imaginaryFactor);
        }   

        Complex operator*(Complex other)
        {   double real = _realFactor * other._realFactor - _imaginaryFactor * other._imaginaryFactor ;
            double imaginary = _realFactor * other._imaginaryFactor + other._realFactor * _imaginaryFactor;
            
             return Complex(real, imaginary);
        }

        Complex operator=(const Complex& other)
        {
            if(this != &other)
            {
                _realFactor = other._realFactor;
                _imaginaryFactor = other._imaginaryFactor;
                return *this;
            }
        }
        Complex addNumbers(Complex number)
        {
            _realFactor += number.getReal();
            _imaginaryFactor += number.getImaginary();
            return *this;
        }

    private:

        double _realFactor; 
        double _imaginaryFactor;

    friend std::ostream& operator<<(std::ostream& os, Complex compNumber);
};










#endif
