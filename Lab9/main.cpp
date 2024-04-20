#include<iostream>

template<typename T>
T _square_root(T n)
{
    try
    {
        if(n>=0)
        {   
            return sqrt(n);
        }
        throw n;
    }
    catch(T n)
    {
        throw;
        // if(n<0)
        // {
        //     std::cout << "Imaginary number !!" << std::endl;
        //     std::cout << "0 + " << "√" << -n << "j" << std::endl;
        // }
        // std::cout << "Invalid number " << n << " for the given expression" << std::endl;
    }
    return -1;
}

int main()
{
    float num;
    std::cout << "Enter the number to find the sqaure root of : ";
    try 
    {
        std::cin >> num;
        if(!std::cin.good())
        {
            throw 'C';
        }
        float result = _square_root<float>(num);

        if(result!=-1)
        std::cout << "The square root of " << num << " is : " << result << std::endl;
  
    }
    catch(float n)
    {
        std::cout << "I am outer catch block";
    }
    catch(char c)
    {
        std::cout << "Numeric value expected" << std::endl;
    }

    return 0;
}