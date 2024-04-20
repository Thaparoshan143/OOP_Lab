#include<iostream>

#define ARR_SIZE 10

template<typename T>
void _print_arr(T *arr, int size)
{
    std::cout << "Array Elements are as : " << std::endl;
    for(int i=0;i<size;i++)
    {
        std::cout << i+1 << " - " << *(arr+i) << std::endl;
    }
}

template<typename T, typename U>
void _print_key_pair(T *k, U *v)
{
    for(int i=0;i<ARR_SIZE;i++)
    {
        std::cout << "Key - " << *(k+i) << ", Value - " << *(v+i) << std::endl;
    }
}

int main()
{
    float *tempArr = new float[ARR_SIZE];

    for(int i=0;i<ARR_SIZE;i++)
    {
        *(tempArr+i) = i;
    }
    _print_arr<float>(tempArr, ARR_SIZE);

    int *keys = new int[ARR_SIZE];
    double *values = new double[ARR_SIZE];

    for(int i=0;i<ARR_SIZE;i++)
    {
        *(keys+i) = i;
        *(values+i) = i*i + 5*i + 5;
    }

    _print_key_pair<int, double>(keys, values);

    return 0;
}