#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
//Вариант 5 (E)
int main() {
    float x = 3.6;
    float ur;
    ur = exp(x-2)+fabs(sin(x)) - (pow(x,4)*cos(1/x));
    std::cout<<"e^x-2 + |sin(x)| - x^4 * cos(1/x) = "<<ur;
    return 0;
}
