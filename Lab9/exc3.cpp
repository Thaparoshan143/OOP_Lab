#include<iostream>

#define ARR_SIZE 10

template<class T>
class Array
{
    public:
    T *_data;
    int _size;

    Array()
    {
        this->_data = nullptr;
        this->_size = 0;
    }

    Array(T *d, int s):_data(d), _size(s){}

    void PrintInfo()
    {
        for(int i=0;i<ARR_SIZE;i++)
        {
            std::cout << *(this->_data+i) << std::endl;
        }
    }
};

int main()
{
    float *data = new float[ARR_SIZE];

    // populate with square numnber from 0 to size
    for(int i=0;i<ARR_SIZE;i++)
    {
        *(data+i) = i*i;
    }

    Array<float> a1(data, ARR_SIZE);

    a1.PrintInfo();


    return 0;
}