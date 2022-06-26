#include <iostream>
#include <cmath>
void matrix()
{
    const int rows = 2;
    const int cols = 8;
    int mat[rows][cols];

    srand(0);
    for (int i = 0; i < 1; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand()%100;
    srand(0);
    for (int i = 1; i < 2; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand()%3+1;
    int max = mat[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] <<" ";
    std::cout<<std::endl;
    }
    std::cout<<"...Loading..."<<std::endl;

    for(int i = 1; i<2; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            if(mat[i][j] = 3)
              if(max>mat[0][j]);
                max = mat[0][j];
        }
    }
            std::cout << max<<std::endl;
}
int main()
{
    matrix();
    return 0;
}
