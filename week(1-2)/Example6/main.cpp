#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    float a;
    float b;
    float c;
    float sred;
    float razn;
    std::cout << " Enter a&b&c  "<<std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    sred = (a+b+c)/3;
    razn = 2*(a+c)-3*b;
    std::cout<<"srednee a&b&c = "<< sred<<std::endl;
    std::cout<<"raznost = "<<razn;
    return 0;
}
