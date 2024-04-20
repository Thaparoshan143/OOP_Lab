// program to illustrate the use of namespace in C++

#include<iostream>

char common[] = "I am common Text Block";

namespace BEI
{
    int year=2080;
    char classCR[] = "BEI CR";

    void printCRName()
    {
        std::cout << "BEI CR : " << classCR << std::endl;
    }

    void commonFunction()
    {
        std::cout << "BEI - " << common << std::endl;
    }
}

void printBEIYear()
{
    std::cout << "BEI Year : " <<  BEI::year << std::endl;
}

namespace BCT
{
    int year=2078;
    char classCR[]= "BCT CR";

    void printYear()
    {
        std::cout << year << std::endl;
    }

    void commonFunction()
    {
        std::cout << "BCT - " << common << std::endl;
    }
}

void printBCTCRName()
{
    std::cout << "BCT Class CR : " << BCT::classCR << std::endl;
}

int main()
{
    using namespace BCT;
    using namespace BEI;

    printBEIYear();
    printBCTCRName();
    printCRName();
    printYear();

    BCT::commonFunction();
    BEI::commonFunction();

    return 0;
}