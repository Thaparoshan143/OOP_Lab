#include<iostream>

class Complex
{
    float real;
    float imag;

    public:
    static int objCount;
    Complex()
    {
        this->real =0;
        this->imag=0;
        objCount++;
    }

    Complex(float r, float i)
    {
        this->real = r;
        imag = i;
        objCount++;
    }

    static void ObjectCount()
    {
        std::cout << "Total object count is : " << Complex::objCount << std::endl;
    }

    void PrintInfo()
    {
        std::cout << this->real << " + j" << this->imag << std::endl;
    }
};

int Complex::objCount = 0;



int main()
{
    Complex c1(10,20);
    Complex c2(5,5),c3,c4(4,2);
    c4.PrintInfo();
    Complex::ObjectCount();

    return 0;
}