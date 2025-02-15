#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    float num1;
    float num2;
    int val;

public:
    void Simple_SetNum()
    {
        cout << "enter two numbers" << endl;
        cin >> num1 >> num2;
    }
    void Simple_Calculator(void)
    {

        do
        {
            cout << "enter '1' for addition ,'2' for subtracttion ,'3' for multiplication and '4' for division" << endl;
            cin >> val;
            if (val < 1 || val > 4)
            {
                cout << "enter valid input" << endl;
            }
        } while (val < 1 || val > 4);
        switch (val)
        {
        case 1:
            cout << "addition " << num1 + num2 << endl;
            break;
        case 2:
            cout << "subtraction " << num1 - num2 << endl;
            break;
        case 3:
            cout << "multiplication " << num1 * num2 << endl;
            break;
        case 4:
            cout << "division " << num1 / num2 << endl;
            break;
        }
    }
};
class ScientificCalculator
{
protected:
    float val1, val2;

public:
    void Scientific_Setnum()
    {
        cout << "enter two numbers" << endl;
        cin >> val1 >> val2;
    }
    void cube(void)
    {
        cout << "the cube of both " << val1 << " and " << val2 << " are " << val1 * val1 * val1 << " and " << val2 * val2 * val2 << endl;
    }
    void cuberoot(void)
    {
        cout << "the cuberoot of both " << val1 << " and " << val2 << " are " << cbrt(val1) << " and " << cbrt(val2) << endl;
    }
    void square(void)
    {
        cout << "the square of both " << val1 << " and " << val2 << " are " << (val1 * val1) << " and " << (val2 * val2) << endl;
    }
    void squareroot(void)
    {
        cout << "the squareroot of both " << val1 << " and " << val2 << " are " << sqrt(val1) << " and " << sqrt(val2) << endl;
    }
};
class hybridcalc : public SimpleCalculator, public ScientificCalculator
{
public:
    void set_info()
    {
         Simple_SetNum();
         Scientific_Setnum();
    }
    void process(void)
    {
        Simple_Calculator();
         cube();
         cuberoot();
         square();
         squareroot();
    }
};

int main()
{
SimpleCalculator simple;
simple.Simple_SetNum();
simple.Simple_Calculator();

cout<<"\n"<<endl;
ScientificCalculator scientific;
scientific.Scientific_Setnum();
scientific.cube();
scientific.cuberoot();

cout<<endl;
hybridcalc hybrid;
hybrid.set_info();
hybrid.process();

    return 0;
}