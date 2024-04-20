#include<iostream>

class Time
{
    uint sec, min, hrs;

    public:
    Time();
    Time(uint tsec);
    Time(uint sec, uint min, uint hrs);
    Time(Time &t);

    void GetTimeInfo()
    {
        std::cout << this->hrs << " : " << this->min << " : " << this->sec << std::endl;
    }

};

Time::Time()
{
    hrs=12;
    sec=min=0;
}

Time::Time(uint tsec)
{
    this->sec = tsec%60;
    this->min = (tsec/60)%60;
    this->hrs = (tsec/3600)%24;
}

Time::Time(uint sec, uint min, uint hrs)
{
    this->sec = sec;
    this->min = min;
    this->hrs = hrs;
}

Time::Time(Time &t)
{
    this->sec = t.sec;
    this->min = t.min;
    this->hrs = t.hrs;
}

int main()
{
    Time time(6100);
    Time time2(time);
    time2.GetTimeInfo();
    return 0;
}