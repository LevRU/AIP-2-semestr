#include <iostream>
//Пользователь вводит параметры фигуры. Найти периметр и площадь ромба
int main() {
    int dlina;
    int vysota;
    std::cout << " Enter the length of the side of the diamond  ";
    std::cin >> dlina;
    int p = 4 * dlina;
    std::cout << "Perimeter of the diamond: "<< p << std::endl;
    std::cout << " Enter the height of the diamond";
    std::cin>> vysota;
    int s = vysota * dlina;
    std::cout << "Diamond Square: "<<s<<std::endl;
    return 0;
}
