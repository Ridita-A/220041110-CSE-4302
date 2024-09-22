#include<iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    int hours(int h)
    {
        hour=h;
        return hour;
    }
    int minutes(int m)
    {
        minute=m;
        return minute;
    }
    int seconds(int s)
    {
        second=s;
        return second;
    }
    void reset(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void advance(int h,int m,int s)
    {
        second+=s;
        if(second>59)
        {
            minute+=second/60;
            second=second%60;
        }
        minute+=m;
        if(minute>59)
        {
            hour+=minute/60;
            minute=minute%60;
        }
        hour+=h;
        if(hour>23)
        {
            hour=hour%24;
        }
    }
    void print()
    {
        cout << hour << ":"<< minute << ":"<< second<<endl;
    }
};

int main()
{
    Time t;

    t.hours(2);
    t.minutes(40);
    t.seconds(30);
    t.print(); //first input
    t.advance(24,30,31);
    t.print(); //after advancing
    t.reset(0,0,0);
    t.print(); //after resetting
    return 0;
}
