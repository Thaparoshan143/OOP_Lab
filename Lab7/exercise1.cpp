#include<iostream>

class Course
{
    public:
    int year;

    void EaxmResult()
    {
        std::cout << "Course Result" << std::endl;
    }
};

class Mathematics : public Course
{
    public:
    void EaxmResult()
    {
        std::cout << "Mathematics Result" << std::endl;
    }
};

class Science : public Course
{
    public:
    void EaxmResult()
    {
        std::cout << "Science Result" << std::endl;
    }
};

class Engineering : public Course
{
    public:
    void EaxmResult()
    {
        std::cout << "Engineering Result" << std::endl;
    }
};

class Physics : public Science
{
    public:
    void EaxmResult()
    {
        std::cout << "Physics Result" << std::endl;
    }
};

class Chemistry : public Science
{
    public:
    void EaxmResult()
    {
        std::cout << "Chemistry Result" << std::endl;
    }
};

int main()
{
    Physics p;
    p.EaxmResult();
    p.Course::EaxmResult();
    p.Science::EaxmResult();
    return 0;
}