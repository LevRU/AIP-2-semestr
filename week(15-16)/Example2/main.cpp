#include <iostream>
#include <cmath>
#include <array>
void matrix()
{
    std::array<int,4>mas;
    const int rows = 4;
    const int cols = 4;
    int mat[rows][cols];

    srand(0);
    for (int i = 0; i < rows; i++)
        mas[i]=rand()%10;
    srand(1);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand()%100;
    int max = mat[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] <<" ";
    std::cout<<std::endl;
    }

    std::cout<<"...Loading..."<<std::endl;

    for(int i = 0; i<rows; i++)
    {
        max=mat[i][0];                      //Обнуление максимума после каждой строки?
        for(int j = 0; j<cols; j++)
            if(mat[i][j] > max)
            {
               mas[i] = mat[i][j];
               max = mat[i][j];
            }
    }

    for (int i = 0; i < rows; i++)
            std::cout << mas[i]<<" ";
    std::cout<<std::endl;

}
int main()
{
    matrix();
    return 0;
}
