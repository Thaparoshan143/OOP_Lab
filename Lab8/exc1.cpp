#include<iostream>

class Polygon
{
    public:
    float length, height;

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
    Rectangle()
    {
        this->length = 0;
        this->height = 0;
    }

    Rectangle(float l, float h)
    {
        this->length = l;
        this->height = h;
    }

    float GetArea()
    {
        float temp;
        temp = this->length * this->height;
        return temp;
    }

    friend std::ostream& operator <<(std::ostream &out, Rectangle r);
};

std::ostream& operator << (std::ostream &out, Rectangle r)
{
    out << "Lenght is : " << r.length << ", Height is : " << r.height;
    return out;
}

class Triangle : public Polygon
{
    public:
    Triangle()
    {
        this->length = 0;
        this->height = 0;
    }

    Triangle(float l, float h)
    {
        this->length = l;
        this->height = h;
    }

    float GetArea()
    {
        float temp;
        temp = this->length * this->height * 0.5;
        return temp;
    }

    friend std::istream& operator >> (std::istream& in, Triangle &t);
};

std::istream& operator >> (std::istream &in, Triangle &t)
{
    in >> t.length >> t.height;
    return in;
}

int main()
{
    Triangle T1;
    std::cout << "For the Triangle :" << std::endl;
    std::cin >> T1;
    std::cout << "Area of Triangle = " << T1.GetArea() << " m2" << std::endl;
    Rectangle R1;
    std::cout << "For the Rectangle :" << std::endl;
    R1.TakeInput();
    std::cout << R1 << std::endl;
    std::cout << "Area of Rectangle = " << R1.GetArea() << " m2" << std::endl;
    
    return 0;
}