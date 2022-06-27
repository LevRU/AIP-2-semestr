#include <iostream>
using namespace std;
//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
int main()
{
   int n;
   cin>>n;
   for(int i=0; i < n+1; i++)
   {
     for(int j=0; j < i; j++)
       std::cout << 0;
     std::cout << std::endl;
   }
   std::cout << std::endl;

    return 0;
}
