// Program to convert temperature from Celree centigrade to Celree Fahrenheit and vice versa.

#include<iostream>

int main()
{
    int choice;
    std::cout << "Main Menu" << std::endl;
    std::cout << "1. From Celree to Fahrenheit" << std::endl;
    std::cout << "2. From Fahrenheit to Celree" <<std::endl;
    std::cout << "Enter your choice:" << std::endl;

    std::cin >> choice;

    float Cel=0, Fahr=0;

    switch(choice)
    {
        case 1:
        std::cout << "Enter Centigrade Reading: " << std::endl;
        std::cin >> Cel;
        Fahr=Cel*1.8+32;
        break;
        case 2:
        std::cout << "Enter Fahrenheit Reading: " << std::endl;
        std::cin >> Fahr;
        Cel=(Fahr-32)/1.8;
        break;
        default:
        std::cout << "Invalid Number";
        break;
    }

    std:: cout << "\nReadings:\nCelsius - " << Cel << " : Fahrenheit - " << Fahr << std::endl;

    return 0;
}