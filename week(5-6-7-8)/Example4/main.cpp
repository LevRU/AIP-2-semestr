#include <iostream>
//Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
//Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
//Ш указываются пользователем (считываются с клавиатуры или из файла).

int main()
{
    int h;//начало отсчета
    int m;//конец отсчета
    int s;//шаг
    int f;

    std::cout<<"Vvedite nachalo otcheta, kones otcheta, shag: "<<std::endl;
    std::cin>>h>>m>>s;
    std::cout<< h <<"  "<<std::endl;
    for(int i = h; i < m; i+=s)
    {
        h=h+s;
        std::cout<< h <<"  "<<std::endl;
    }
    return 0;
}
