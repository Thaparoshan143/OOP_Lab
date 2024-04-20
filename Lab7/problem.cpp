#include<iostream>


int InputInt(const char *s)
{
    int temp;
    std::cout << s << std::endl;
    std::cin >> temp;
    return temp;
}


class Result
{
    int totalMarks;
    int obtMarks;
    
    public:
    void SetMarks(int tm, int om)
    {
        this->totalMarks = tm;
        this->obtMarks = om;
    }
    void DisplayResult()
    {
        std::cout << "Total Marks : " << this->totalMarks << std::endl;
        std::cout << "Obtained Marks : " << this->obtMarks << std::endl;
        std::cout << "Percentage : " << float(this->obtMarks)*100/this->totalMarks << "%" << std::endl;
    }
};

class Test : Result
{
    public:
    int subCount;
    int *subMarks;

    void SetSubCount(int sc)
    {
        this->subCount = sc;
        this->subMarks = new int[this->subCount];
    }

    void TestMarks()
    {
        int totalobt=0;
        for(int i=0;i<subCount;i++)
        {
            std::cout << "Subject - " << i+1;
            *(this->subMarks+i) = InputInt(" || Enter Marks : ");
            totalobt+=*(this->subMarks+i);
        }
        SetMarks(subCount*100, totalobt);
        this->DisplayResult();
    }
};

class Student : Test
{
    char *name;
    public:

    void SetStudentInfo()
    {
        std::cout << "Enter Student name : " << std::endl;
        std::cin >> this->name;
        this->SetSubCount(InputInt("Enter Subject Count"));
        this->TestMarks();
    }
};


int main()
{
    Student s1;
    s1.SetStudentInfo();
    return 0;
}