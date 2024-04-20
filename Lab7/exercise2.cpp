#include<iostream>

class Engineering
{
    public:
    int year;
    Engineering()
    {
        std::cout << "I am Constructor of Engineering" << std::endl;
    }
    ~Engineering()
    {
        std::cout << "I am Destructor of Engineering" << std::endl;
    }
};

class ComputerEng : public Engineering
{
    public:
    int ProgLevel;
    ComputerEng()
    {
        std::cout << "I am Constructor of Computer Engineering" << std::endl;
    }
    ~ComputerEng()
    {
        std::cout << "I am Destructor of Computer Engineering" << std::endl;
    }
};

class SoftCompEng : public ComputerEng
{
    public:
    int ProjectCount;
    SoftCompEng()
    {
        std::cout << "I am Constructor of Software Computer Engineering" << std::endl;
    }
    ~SoftCompEng()
    {
        std::cout << "I am Destructor of Software Computer Engineering" << std::endl;
    }
};


int main()
{
   { SoftCompEng sce; }

    return 0;
}