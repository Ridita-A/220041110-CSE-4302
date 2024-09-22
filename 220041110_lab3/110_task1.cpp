#include<iostream>

using namespace std;

class Counter
{
private:
    int incrementstep;
    int count;

public:
    Counter()
    {
        count=0;
        incrementstep=1;
    }
    void setIncrementStep(int in)
    {
        incrementstep = in;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=incrementstep;
    }
    void resetCount()
    {
        count=0;
    }
};

int main()
{
    Counter c;

    c.setIncrementStep(5);

    cout << "1st count "<< c.getCount() <<endl;
    c.increment();
    cout << "inc 1: "<< c.getCount() <<endl;
    c.increment();
    cout << "inc 2: "<< c.getCount() <<endl;
    c.resetCount();
    cout << "reset "<< c.getCount() <<endl;

    return 0;
}
