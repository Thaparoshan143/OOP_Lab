// program to swap two numbers using pointer variables

#include<iostream>

float getTitledInput(const char* t)
{
    float temp;
    std::cout << t << std::endl;
    std::cin >> temp;
    return temp;
}

void swap(float* pn1, float* pn2)
{
    float temp = *pn1;
    *pn1 = *pn2;
    *pn2 = temp;
}

int main()
{
    float n1, n2;
    n1 = getTitledInput("Enter First Number : ");
    n2 = getTitledInput("Enter Second Number : ");

    std::cout << "Inputed Numbers : " << n1 << " | " << n2 << std::endl;

    float* pn1=&n1;
    float* pn2=&n2;

    swap(pn1,pn2);

    std::cout << "Numbers After Swapping : " << n1 << " | " << n2 << std::endl; 

    return 0;
}