// program to convert temperature between centigrade and fahrenheit

#include<iostream>

float getTitledInput(const char* t)
{
    float temp;
    std::cout << t << std::endl;
    std::cin >> temp;
    return temp;
}

int getMenuChoice()
{
    int choice;
    std::cout << "Menu" << std::endl;
    std::cout << "1. Degree Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Degree Celsius" << std::endl;

    std::cout << "Choose the option: ";
    std::cin >> choice;
    return choice;
}

int main()
{
    float fahr, cel;
    int choice;

    choice = getMenuChoice();

    switch(choice)
    {
        case 1:
        cel=getTitledInput("Enter Degree Celsius Value : ");
        fahr=cel*1.8+32;
        break;

        case 2:
        fahr=getTitledInput("Enter Fahrenheit Value: ");
        cel=5*(fahr-32)/9;
        break;

        default:
        std::cout << "Option number out of range. Try again";
        return 0;
    }

    std::cout << "Degree : " << cel << " | Fahrenheit : " << fahr <<std::endl;
    return 0;
}