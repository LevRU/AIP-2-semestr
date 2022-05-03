#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    float a;
    float b;
    float c;
    std::cout << " Enter a&b&c  "<<std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    a = a*2;
    b = b-3;
    c = c*c;
    std::cout <<"a = "<< a<< std::endl;
    std::cout <<"b = "<<b<<std::endl;
    std::cout <<"c = "<<c<<std::endl;
    std::cout <<"a+b+c = "<<a+b+c<<std::endl;
    return 0;
}

