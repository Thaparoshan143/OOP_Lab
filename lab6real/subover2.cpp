#include<iostream>

class Mat2x2
{
    public:
    int mat[2][2];

    Mat2x2();
    Mat2x2(Mat2x2 &m);
    friend Mat2x2 operator * (Mat2x2 &lhs, Mat2x2 &rhs);
    friend Mat2x2 operator - (Mat2x2 &lhs, Mat2x2 &rhs);

    void PrintInfo();
    void GetInput();
    static void Copy(Mat2x2 &m1, Mat2x2 &m2);
};

Mat2x2 operator * (Mat2x2 &lhs, Mat2x2 &rhs)
{
    Mat2x2 temp;
    int res=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                res += lhs.mat[i][k] * rhs.mat[k][j];
            }
            temp.mat[i][j] = res;
            res = 0;
        }
    }
    return temp;
}

Mat2x2 operator - (Mat2x2 &lhs, Mat2x2 &rhs)
{
    Mat2x2 temp;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            temp.mat[i][j] = lhs.mat[i][j] - rhs.mat[i][j];
        }
    }
    return temp;
}

Mat2x2::Mat2x2()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            this->mat[i][j]=0;
        }
    }
}

Mat2x2::Mat2x2(Mat2x2 &m)
{
    this->Copy(m,*this);
}

void Mat2x2::Copy(Mat2x2 &src, Mat2x2 &des)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            des.mat[i][j] = src.mat[i][j];
        }
    }
}

void Mat2x2::PrintInfo()
{
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         std::cout << "Element [" << i <<"][" << j << "] = " << this->mat[i][j] << std::endl;
    //     }
    // }

    std::cout << "Matrix form : " << std::endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            std::cout << this->mat[i][j] << "\t";
        }
        std::cout << "\n";
    }
}   

void Mat2x2::GetInput()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            std::cout << "Enter element in [" << i <<"][" << j << "]" << std::endl;
            std::cin >> this->mat[i][j];
        }
    }
}

int main()
{   
    Mat2x2 m1, m2, m3;

    std::cout << "Input element values for mat1" << std::endl;
    m1.GetInput();

    std::cout << "Input element values for mat2" << std::endl;
    m2.GetInput();

    // m3 = m2-m1;

    // m3.PrintInfo();
    m3 = m1 * m2;
    m3.PrintInfo();

    return 0;
}