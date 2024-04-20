#include<iostream>

template<typename T>
T* _join_string(T *s1, T *s2, int s1l, int s2l)
{
    T *temp = new T[s1l+s2l+1];
    try 
    {
        if(s1==nullptr || s2==nullptr)
        {
            throw (char*)"N";
        }
        if(strcmp(s1, " ")==0 || strcmp(s2, " ")==0)
        {
            throw (char*)"E";
        }
        if(strcmp(s1, " ")==0 && s2==nullptr)
        {
            throw 2;
        }
        for(int i=0;i<s1l;i++)
        {
            temp[i] = *(s1+i);
        }
        for(int j=s1l;j<s2l+s1l;j++)
        {
            temp[j] = *(s2+j-s1l);
        }
        temp[s1l+s2l] = '\0';
        return temp;
    }
    catch(T *err)
    {
        if(strcmp(err, "N"))
        {
            std::cout << "Null pointer" << std::endl;
        }
        else if(strcmp(err, "E"))
        {
            std::cout << "Empty string" << std::endl;
        }
        else
            std::cout << "Invalid operation!!" << std::endl;
        return nullptr;
    }
    catch(int n)
    {
        std::cout << "The pointer " << n << "is null" << std::endl;
        return nullptr;
    }
}


int main()
{
    char *str1 = " ";
    char *str2 = "Thapa";

    char *name = _join_string<char>(str1, str2, 7, 5);
    if(name)
    std::cout << name;

    return 0;
}