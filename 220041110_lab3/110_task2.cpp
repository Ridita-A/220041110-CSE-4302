#include<iostream>

using namespace std;

class Temperature
{
private:
    float value;
    char unit;
public:

    void assign(float val,char un)
    {
        value=val;
        unit=un;
    }
    float convert(char conv)
    {
        float converted;
        float midstep;
        if(unit=='C' && conv=='K')
        {
            converted = value+273.15;
        }
        else if(unit=='K' && conv=='C')
        {
            converted = value-273.15;
        }
        else if(unit=='C' && conv=='F')
        {
            converted = value*(9.0/5.0)+32.0;
        }
        else if(unit=='F' && conv=='C')
        {
            converted = (value-32.0)*(5.0/9.0);
        }
        else if(unit=='K' && conv=='F')
        {
            midstep=value-273.15;
            converted = midstep*(9.0/5.0)+32.0;
        }
        else if(unit=='F' && conv=='K')
        {
            midstep=(value-32.0)*(5.0/9.0);
            converted = midstep+273.15;
        }
        return converted;
    }
    void print()
    {
        if(unit=='K')
            cout << "The temperature is "<< value << " Kelvin."<<endl;
        else if(unit=='F')
            cout << "The temperature is "<< value << " Fahrenheit."<<endl;
        else if(unit=='C')
            cout << "The temperature is "<< value << " Celsius."<<endl;
    }
};

int main()
{
    Temperature temp;
    float n;

    temp.assign(100,'C');
    n = temp.convert('K');
    temp.assign(n,'K');
    temp.print();

    return 0;
}
