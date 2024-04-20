#include<iostream>

#define PI 3.1415

float getTitledInput(const char* t)
{
    float temp;
    std::cout << t << std::endl;
    std::cin >> temp;
    return temp;
}

void printString(const char* s)
{
    std::cout << s << std::endl;
}

float calculateArea(int len=10)
{
    return 6*len;
}

float calculateArea(float rad)
{
    return PI*rad*rad;
}

float calcualteArea(float len, float bre)
{
    return len*bre;
}

int main()
{
    int choice=0;
    float area = 0;
    float rad, len, bre;

    printString("Cube:");
    area = calculateArea();
    std::cout << "Cube Area : " << area << std::endl;

    printString("Circle:");
    rad = getTitledInput("Enter radius of Circle : ");
    area = calculateArea(rad);
    std::cout << "Circle Area : " << area << std::endl;

    printString("Rectangle:");
    len = getTitledInput("Enter length : ");
    bre = getTitledInput("Enter breadth : ");
    area = calcualteArea(len,bre);
    std::cout << "Rectangle Area : " << area << std::endl;

    return 0;
}