#include <iostream>
#include <cmath>
#include <array>
void matrix()
{
    int mr = 0;
    const int rows = 4;
    const int cols = 4;
    int mat[rows][cols];
    int min = mat[0][0];

    srand(3);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand()%100;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] <<" ";
    std::cout<<std::endl;
    }

    std::cout<<"...Loading..."<<std::endl;

    for(int i = 0; i<rows; i++)
        for(int j = 0; j<cols; j++)
            if(mat[i][j] < min)
            {
               min = mat[i][j];
               mr = i;
            }
    for(int j = 0;j<cols;j++)
        mat[mr][j]=0;


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] <<" ";
    std::cout<<std::endl;
    }
}
int main()
{
    matrix();
    return 0;
}
