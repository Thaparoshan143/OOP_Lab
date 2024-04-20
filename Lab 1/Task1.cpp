// program to convert angle in degree to radian.

#include<iostream>

#define PI 3.14159265358

void calculateDegToRad(float d)
{
    double rad=PI*d/180;
    std::cout << "The radian value of " << d << " degree is : " << rad << std::endl;
}

int main()
{
    float degree;
    std::cin >> degree;

    calculateDegToRad(degree);

    return 0;
}