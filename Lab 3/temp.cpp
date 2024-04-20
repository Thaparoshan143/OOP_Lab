#include<iostream>

typedef struct Student
{
    char name[25];
    int roll;
    int age;
}Student;

void printString(const char* s)
{
    std::cout << s << std::endl;
}

void showOptions()
{
    printString("1. Add Student");
    printString("2. Remove Student");
}

void printStudentInfo(Student *s)
{
    if(s==nullptr)
    {
        printString("Student not found");
        return;
    }
    printString("Name : ");
    std::cout << s->name << std::endl;
    printString("Roll : ");
    std::cout << s->roll << std::endl;
    printString("Age : ");
    std::cout << s->age << std::endl;
}

void setStudentInfo(Student *s)
{
    printString("Enter Name : ");
    std::cin >> s->name;
    printString("Enter Roll : ");
    std::cin >> s->roll;
    printString("Enter Age : ");
    std::cin >> s->age;
}

void addStudent(Student *s)
{
    s = new Student;
    setStudentInfo(s);
}

void removeStudent(Student *s)
{
    delete (s);
}

int main()
{
    int choice = 1;
    printString("Use of dynamic allocation and deallocation");
    showOptions();
    Student *std=nullptr;

    if(choice!=0)
    {
        printString("Enter your choice : ");
        std::cin >> choice;

        switch(choice)
        {
            case 0:
            printString("Exiting..");
            break;
            case 1:
            addStudent(std);
            break;
            case 2:
                if(std==nullptr)
                {
                    printString("No block to delete");
                    break;
                }
                else
                {
                    removeStudent(std);
                }
            break;
            default:
            printString("Out of range choice!");
            break;
        }
    }

    printStudentInfo(std);

    return 0;
}