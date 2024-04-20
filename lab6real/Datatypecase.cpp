#include<iostream>

class Design1;
class Design2;

char* _copy_string(char *src);

class Design1
{
    public:
    char *code;
    uint qty, price;

    Design1();
    Design1(char *c, uint q, uint p);

    operator Design2();
};

class Design2
{
    public:
    char *code;
    uint value;

    Design2();
    Design2(char *c, uint v);
    Design2(Design1 &d1);
    
    void PrintInfo();
};

Design1::operator Design2()
{
    Design2 temp;
    temp.code = _copy_string(this->code);
    temp.value = this->price * this->qty;
    return temp;
}

Design1::Design1()
{
    this->code = "";
    this->price = 0;
    this->qty = 0;
}

Design1::Design1(char *c, uint q, uint p)
{
    this->code = _copy_string(c);
    this->qty = q;
    this->price = p;
}

Design2::Design2()
{
    this->code = "";
    this->value = 0;
}

Design2::Design2(char *c, uint v)
{
    this->code = _copy_string(c);
    this->value = v;
}

Design2::Design2(Design1 &d1)
{
    this->code = _copy_string(d1.code);
    this->value = d1.qty * d1.price;
}

void Design2::PrintInfo()
{
    std::cout << "Code is : " << this->code << ", Value is : " << this->value << std::endl;
}

char* _copy_string(char *src)
{
    char *des;
    int len = 0;
    while(*(src+len)!='\0')
    {
        len++;
    }

    des = new char[len+1];
    int indCount = 0;
    while(*(src+indCount)!='\0')
    {
        *(des+indCount) = *(src+indCount);
        indCount++;
    }
    *(des+indCount) = *(src+indCount);
    return des;
}

int main()
{
    Design1 d1("Code 1", 10, 100);

    Design2 d2 = Design2(d1);

    d2.PrintInfo();

    return 0;
}