#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    float a;
    float b;
    float c;
    std::cout << " Enter a "<<std::endl;
    std::cin >> a;
    b = a*a;
    c = a*a*a;
    std::cout<<"sqr(a) = "<< b<<std::endl;
    std::cout<<"a^3 = "<<c;
    return 0;
}
