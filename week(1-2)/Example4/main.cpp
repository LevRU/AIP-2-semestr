#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    float a;
    float b;
    float c;
    std::cout << " Enter a&b  "<< std::endl;
    std::cin >> a;
    std::cin >> b;
    c = a;
    a = b;
    b = c;
    std::cout <<"a = "<< a<< std::endl;
    std::cout <<"b = "<<b;
    return 0;
}
