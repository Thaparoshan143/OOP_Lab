#include<iostream>

template<typename T>
void print(T data)
{
    std::cout << data << std::endl;
}

template<typename T, typename U>
void print(T data, U remarks)
{
    std::cout << data << ", " << remarks << std::endl; 
}

template<typename T>
void print(T data, int size)
{
    std::cout << data << ", " << size << std::endl;
}

int main()
{
    float data = 10.1;
    int size = 5;
    double remarks = 10.555;

    print<float>(data);
    print<float, double>(data, remarks);
    print<float>(data, 1);

    return 0;
}