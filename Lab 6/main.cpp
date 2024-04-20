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

    float GetReal() const
    {
        return real;
    }

    float GetImag()
    {
        return imag;
    }

    friend void PrintInfo(const Complex &);
};

void PrintInfo(const Complex &c)
{
    std::cout << "Real part is : " << c.real << "\nImaginary part is : " << c.imag << std::endl;
    std::cout << c.GetReal() << " + j" << c.imag << std::endl;
}

int main()
{
    const Complex c2(10,20);
    PrintInfo(c2);

    return 0;
}