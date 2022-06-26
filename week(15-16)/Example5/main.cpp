#include <iostream>
#include <cmath>

void matrix()
{


    const int rows = 4;
    const int cols = 4;
    int mat[rows][cols];
    int mat2[rows][cols];
    int C[rows][cols];

    srand(1);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j]=rand()%50;
    srand(0);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat2[i][j]=rand()%50;

    std::cout<<"matrix A"<<std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] <<" ";
    std::cout<<std::endl;
    }
    std::cout<<"matrix B"<<std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat2[i][j] <<" ";
    std::cout<<std::endl;
    }

     std::cout<<"...Loading..."<<std::endl;

     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < cols; j++)
             C[i][j]=mat[i][j]+mat2[i][j];
     }
     std::cout<<"Summa:"<<std::endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         std::cout << C[i][j] <<" ";
         std::cout<<std::endl;
     }

     std::cout<<"Raznost':"<<std::endl;
     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < cols; j++)
             C[i][j]=mat[i][j]-mat2[i][j];
     }
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         std::cout << C[i][j] <<" ";
         std::cout<<std::endl;
     }
     std::cout<<"Proizvedenie:"<<std::endl;
     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < cols; j++)
             C[i][j]=mat[i][j]*mat2[i][j];
     }
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         std::cout << C[i][j] <<" ";
         std::cout<<std::endl;
     }
     std::cout<<"Transporirovanie:"<<std::endl;
     for (int i = 0; i < rows; i++)
         for (int j = 0; j < cols; j++)
         {
             mat[i][j]=mat[j][i];
             mat2[i][j]=mat2[j][i];
         }
     std::cout<<"matrix A"<<std::endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         std::cout << mat[i][j] <<" ";
         std::cout<<std::endl;
     }
     std::cout<<"matrix B"<<std::endl;
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         std::cout << mat2[i][j] <<" ";
         std::cout<<std::endl;
     }

}

int main()
{
    matrix();
    return 0;
}
