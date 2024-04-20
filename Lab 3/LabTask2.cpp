#include<iostream>

char *name = new char[25];
int *roll = new int;

void printString(const char* s)
{
    std::cout << s << std::endl;
}

void getNameAndRoll()
{
    printString("Enter Name : ");
    std::cin >> name;
    printString("Enter Roll:");
    std::cin >> *roll;
}

void freeDynMemory()
{
    delete roll;
    delete[] name;
}

void printInfo()
{
    printString("Name : ");
    std::cout << name << std::endl;
    printString("Roll no : ");
    std::cout << *roll << std::endl;
}

int main()
{
    getNameAndRoll();
    printString("Memory is allocated dynamically");
    printInfo();
    freeDynMemory();
    printString("After Deallocation: ");
    printInfo();

    return 0;
}