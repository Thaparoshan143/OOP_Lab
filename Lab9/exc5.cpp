#include<iostream>

template<typename T>
T _sqrt_divide(T num, T den)
{
    try 
    {
        if(num < 0 || den < 0)
        {
            throw 'I';
        }
        if(den == 0)
        {
            throw den;
        }
        return sqrt((num/den));
    }
    catch(...)
    {
        if(den == 0)
        {
            std::cout << "Denominator is Zero" << std::endl;
        }
        if(num < 0 || den < 0)
        {
            std::cout << "Complex number root cant be calculated" << std::endl;
        }
        return -1;
    }
}

int main()
{
    float result = _sqrt_divide<float>(-10.1,10);
    if(result!=-1)
    std::cout << "Result is : " << result << std::endl;

    return 0;
}