#include <iostream>
using namespace std;
class base1
{

protected:
    int base1num;

public:
    void set_base1num(int num1)
    {
        base1num = num1;
    }
};
class base2
{

protected:
    int base2num;

public:
    void set_base2num(int num2)
    {
        base2num = num2;
    }
};
class base3
{

protected:
    int base3num;

public:
    void set_base3num(int num3)
    {
        base3num = num3;
    }
};
class display : public base1, public base2, public base3
{
public:
    void show(void)
    {
        cout << "the value of base 1 is " << base1num << endl;
        cout << "the value of base 2 is " << base2num << endl;
        cout << "the value of base 3 is " << base3num << endl;
        cout << "the sum of all is " << base1num + base2num + base3num << endl;
    }
};

int main()
{
    display hi;
    hi.set_base1num(14);
    hi.set_base2num(14);
    hi.set_base3num(14);
    hi.show();
    return 0;
}