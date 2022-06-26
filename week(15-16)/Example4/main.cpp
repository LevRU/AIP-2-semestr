#include <iostream>
#include <cmath>
struct Robot
{
    float batt;
    float speed;
    int posx;
    int posy;
};
void matrix()
{
    Robot rob;
    const int rows = 8;
    const int cols = 8;
    int mat[rows][cols];


    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            if((i+j) % 2)
                mat[i][j] = 8;
            else mat[i][j] = 0;
        }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] <<" ";
    std::cout<<std::endl;
    }
    std::cout<<"...Loading..."<<std::endl;
    std::cout<<"Enter the battery level and speed"<<std::endl;
    std::cin>>rob.batt>>rob.speed;
    std::cout<<"Enter X and Y position (1-8)"<<std::endl;
    std::cin>>rob.posx>>rob.posy;
    std::cout<<"...Initialization..."<<std::endl;

    mat[rob.posy-1][rob.posx-1] = 67;

    std::cout<<"Characteristics of the Rob: "<<std::endl;
    std::cout<<"Battery level = "<<rob.batt<<"%"<<std::endl;
    std::cout<<"Speed = "<<rob.speed<<" speed of light(in vacuum???)"<<std::endl;
    std::cout<<"Position = "<<rob.posx<<" "<<rob.posy<<std::endl;

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
