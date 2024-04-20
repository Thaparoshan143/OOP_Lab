#include<iostream>

class Staff
{
    public:
    uint id;
    char *name;
    unsigned long long int phone;
    unsigned long long int acc_no;
};

class Teaching : public virtual Staff
{
    public:
    int no_of_class;
};

class AdminStaff : virtual public Staff
{
    public:
    char *shift;
};

class DeparmentStaff : public Teaching, public AdminStaff
{
    public:
    DeparmentStaff(int id, char *n, int noc)
    {
        this->id = id;
        this->name = n;
        this->no_of_class = noc;
    }
    void DisplayInfo()
    {
        std::cout << "Department Id ; " << this->id << "\nDepartment Name : " << this->name << "\nDepartment phone : " << this->phone << "\nDepartment Account Number : " << this->acc_no << std::endl;
    }

};

int main()
{
    DeparmentStaff ds(1,"Name",5);
    ds.DisplayInfo();

    return 0;
}