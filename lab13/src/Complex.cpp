#include "Complex.h"


std::ostream& operator<<(std::ostream& os, Complex compNumber)
{
    os << "( " << compNumber.getReal() << ", " << compNumber.getImaginary() << "i)" << std::endl;

    return os; 
}