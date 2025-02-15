// constructor overloading
#include <iostream>
using namespace std;
class number
{
    int x, y;

public:
    void printnumber(void);

    number(int a, int b)
    {
        x = a;
        y = b;
    }
    number(int a)
    {
        x = a;
        y = 0;
    }
};
void number::printnumber(void)
{
    cout << "your number is:" << x << " and " << y << endl;
}
int main()
{
    number a = number(5,76);
    a.printnumber();
    return 0;
}