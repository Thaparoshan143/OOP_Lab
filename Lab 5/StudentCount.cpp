#include<iostream>

class Student
{
    private:
    char *name;
    char *depart;
    int year;
    void increamentCount();

    public:
    Student();
    static int studentCount;
    Student(char *name, char *depart, int year);
};

void Student::increamentCount()
{
    studentCount++;
}

Student::Student()
{
    this->name = (char*) "Roshan Thapa";
    this->depart = (char*) "BCT";
    this->year = 2078;
    increamentCount();
}

Student::Student(char *name, char *depart, int year)
{
    this->name = name;
    this->depart = depart;
    this->year = year;
    increamentCount();
}

int Student::studentCount = 0;

int main()
{
    Student s1,s2,s3[100];
    int count =  Student::studentCount;
    std::cout << count << std::endl;
    return 0;
}