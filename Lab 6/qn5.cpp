#include<iostream>

class Complex
{
    const float real;
    float imag;

    public:
    Complex():real(0)
    {
        this->imag=0;
    }

    Complex(float r, float i):real(r)
    {
        imag = i;
    }

    friend void PrintMag(Complex &);
};

void PrintMag(Complex &c)
{
    float mag = sqrt(pow(c.real,2) + pow(c.imag,2));
    std::cout << c.real << " + j" << c.imag << std::endl;
    std::cout << "\nMagnitude is : " << mag << std::endl;
}

int main()
{
    Complex c1(5,2);
    const Complex c2;
    PrintMag(c1);

    return 0;
}