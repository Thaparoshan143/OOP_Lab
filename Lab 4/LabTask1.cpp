#include<iostream>
#include"Student.h"


int main()
{
    Student std1("Pabin",27,"BCT");
    Student std2(std1);
    std::cout << std1.publicValue  << std::endl;
    std1.SetInfo("New Roshan",036,"New BCT");
    std1.DisplayInfo();
    std2.DisplayInfo();
    return 0;
}