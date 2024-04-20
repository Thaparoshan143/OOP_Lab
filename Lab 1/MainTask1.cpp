// program to convert angle in degree to radian

#include<iostream>

#define PI 3.1415

int main()
{
    float deg,rad;
    std::cout << "Enter the angle in degree : " << std::endl;
    std::cin >> deg;

    rad=deg*PI/180;

    std::cout <<deg << " degree is " << rad <<" radian" << std::endl;
    return 0;
}