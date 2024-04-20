#include<iostream>

class Complex 
{
    public:
    float r, i;
    Complex(float r, float i)
    {
        this->r = r;
        this->i = i;
    }

    Complex Get_Self()
    {
        return *this;
    }

    float Get_Real()
    {
        return r;
    }
    
    float Get_Imag()
    {
        return i;
    }

    Complex operator*(const float rhs)
    {
        this->r*=rhs;
        this->i*=rhs;
        return *this;
    }
};

Complex get_doubled(Complex c)
{
    return c*2;
}

void double_complex(Complex c)
{
    c=c*2;
}

int main()
{   
    Complex c1= Complex(1,5);
    Complex c2 = get_doubled(c1);
    std::cout << c2.r << " + j" << c2.i << std::endl;
    std::cout << "Without reference passing no change\n" << std::endl;
    double_complex(c1);
    std::cout << c2.r << " + j" << c2.i << std::endl;

    return 0;
}