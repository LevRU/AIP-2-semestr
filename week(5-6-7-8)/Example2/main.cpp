#include <iostream>
#include <cmath>
#include <math.h>
// y = (-3+x)2 + 2x+5  (условие)

int main()
{
    int d;//шаг
    int n;//диапозон
    int x;
    float y;

    std::cout<<"Vvedite diapazon, shag, argument:   ";
    std::cin>>n>>d>>x;
    for(int i = 0; i < n; i+=d )
    {
        y= (-3+x)*2+2*x+5;
        x=x+1;
        std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
    }
    return 0;
}
