#include<iostream>
#include<fstream>

#define FIELD_SIZE 30

char* alloc_string(int size)
{
    return new char[size];
}

char* getTitCharLine(const char *s, int size)
{
    char *temp = alloc_string(size);
    std::cout << s << std::endl;

    char ch=' ';
    int ind = 0;
    while((ch)!='\n')
    {
        ch = getchar();
        if(ch!='\n')
        *(temp+ind) = ch=='\n'?'\0':ch;
        ind++;
    }
    return temp;
}

bool compareString(char *s1, char *s2)
{
    if(s1==nullptr || s2==nullptr)
    {
        std::cout << "NUll point passed" << std::endl;
        return false;
    }
    int ind = 0;
    while(*(s2+ind)!='\0')
    {
        if(*(s2+ind)!=*(s1+ind))
        {
            return false;
        }
        ind++;
    }
    return true;
}

class Student
{
    public:
    Student();
    char *name;
    char *address;
    char *program;

    void GetInput();
    void DisplayInfo();
    void WriteInFile(std::ofstream &outFile);
    void initalize();
};

Student::Student()
{
    this->name = nullptr;
    this->address = nullptr;
    this->program = nullptr;
}

void Student::GetInput()
{
    std::cout << "Enter Student Info" << std::endl;
    this->name = getTitCharLine("Enter Name : ", FIELD_SIZE);
    this->address = getTitCharLine("Enter your address : ", FIELD_SIZE);
    this->program = getTitCharLine("Enter your program : ", FIELD_SIZE);
}

void Student::DisplayInfo()
{
    std::cout << "---> Student Info <---" << std::endl;
    std::cout << "Name : " << this->name << "\nAddress : " << this->address << "\nProgram : " << this->program << std::endl;
}

void Student::WriteInFile(std::ofstream &outFile)
{
    outFile.setf(std::ios::left);
    outFile << std::setw(FIELD_SIZE) << this->name << " " << std::setw(FIELD_SIZE) << this->address << " " << std::setw(FIELD_SIZE) << this->program << std::endl;
}

void Student::initalize()
{
    this->name = alloc_string(FIELD_SIZE);
    this->address = alloc_string(FIELD_SIZE);
    this->program = alloc_string(FIELD_SIZE);
}

int main()
{
    int stdCount;
    char *fileName = alloc_string(FIELD_SIZE);
    std::cout << "Enter File Name" << std::endl;
    std::cin >> fileName;
    std::ofstream outFile(fileName, std::ios::app);
    
    std::cout << "Enter no of student : " << std::endl;
    std::cin >> stdCount;
    getchar();
    Student s1[stdCount];

    for(int i=0;i<stdCount;i++)
    {   
        s1[i].GetInput();
        s1[i].WriteInFile(outFile);
    }
    outFile.close();

    std::ifstream inFile(fileName);
    Student s2;
    s2.initalize();
    char *temp = getTitCharLine("Enter name to search :", FIELD_SIZE);
    while(inFile.read(s2.name, FIELD_SIZE+1))
    {
        if(compareString(s2.name, temp))
        {
            inFile.read(s2.address, FIELD_SIZE+1);
            inFile.read(s2.program, FIELD_SIZE+1);
            s2.DisplayInfo();
        }
    }
    inFile.close();

    return 0;
}