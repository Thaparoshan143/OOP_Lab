// program to swap two numbers using refrence variables

#include<iostream>

float getTitledInput(const char* t)
{
    float temp;
    std::cout << t << std::endl;
    std::cin >> temp;
    return temp;
}

void swap(float& rn1, float& rn2)
{
    float temp=rn1;
    rn1=rn2;
    rn2=temp;
}

int main()
{
    float n1, n2;
    n1 = getTitledInput("Enter First Number : ");
    n2 = getTitledInput("Enter Second Number : ");

    std::cout << "Inputed Numbers : " << n1 << " | " << n2 << std::endl;

    float& rn1 = n1;
    float& rn2 = n2;

    swap(rn1,rn2);

    std::cout << "Numbers After Swapping : " << n1 << " | " << n2 << std::endl;

    return 0;
}