#include <iostream>
#include <cmath>
#include <math.h>
// y= √2+4x*x+6x+sin(8x+11) (условие)

int main()
{
    int d;//шаг
    int n;//диапозон
    int x;
    float y;

    std::cout<<"Vvedite diapazon, shag, argument:   ";
    std::cin>>n>>d>>x;
    for(int i=0; i<n; i+=d )
    {
        y= sqrt(2+4*x*x)+6*x+sin(8*x+11);
        x=x+d;
        std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
     }
    return 0;
}
