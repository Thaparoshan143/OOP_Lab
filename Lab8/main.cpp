#include<iostream>

class Polygon
{
    public:
    float length, height;

    Polygon()
    {
        this->length = 0;
        this->height = 0;
    }

    virtual float GetArea() = 0;
    void TakeInput()
    {
        std::cout << "Enter value of length : ";
        std::cin >> this->length;
        std::cout << "Enter value of breadth : ";
        std::cin >> this->height;
    }
};

class Rectangle: public Polygon
{
    public:
    float GetArea()
    {
        float temp;
        temp = this->length * this->height;
        return temp;
    }
};

class Triangle : public Polygon
{
    public:
    float GetArea()
    {
        float temp;
        temp = this->length * this->height * 0.5;
        return temp;
    }
};

int main()
{
    Triangle T1;
    std::cout << "For the Triangle :" << std::endl;
    T1.TakeInput();
    std::cout << "Area of Triangle = " << T1.GetArea() << " m2" << std::endl;
    Rectangle R1;
    std::cout << "For the Rectangle :" << std::endl;
    R1.TakeInput();
    std::cout << "Area of Rectangle = " << R1.GetArea() << " m2" << std::endl;
    
    return 0;
}