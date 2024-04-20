#include"Student.h"

void printString(const char *s)
{
    std::cout << s << std::endl;
}

Student::Student()
{
    this->name = nullptr;
    this->roll_no=0;
    this->depart = nullptr;
}

Student::Student(const char *n, int r,const char *d)
{
    assignAttribute(n,r,d);
}

Student::Student(Student &s)
{
    int nameSize = getCharSize(s.name);
    char *tempName;
    copyString(tempName,s.name,nameSize);
    this->name = tempName;

    this->roll_no = s.roll_no;
    
    this->depart = s.depart;
}

void Student::copyString(char *d, char *s, int size)
{
    d=new char[size+1];
    for(int i=0;i<size;i++)
    {
        *(d+i)=*(s+i);
    }
    *(d+size)='\0';
}

void Student::SetInfo(const char *n, int r, const char *d)
{
    assignAttribute(n,r,d);
}

void Student::DisplayInfo()
{
    printString("Student Info:");
    std::cout << "Name : " << this->name << std::endl;
    std::cout << "Roll no : " <<  this->roll_no << std::endl;
    std::cout << "Department : " << this->depart << std::endl;
}

void Student::assignAttribute(const char *n, int r, const char *d)
{
    this->name = (char*) n;
    this->roll_no = r;
    this->depart = (char*) d;
}

int Student::getCharSize(const char *s)
{
    int count = 0;
    while(*(s+count)!='\0')
    {
        count++;
    }
    return count;
}