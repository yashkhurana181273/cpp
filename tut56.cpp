#include <iostream>
using namespace std;
class base
{
public:
    int base_var = 1;
    virtual void display()
    {
        cout << "1.the value of the base variable is " << base_var << endl;
    }
};
class derived : public base
{
public:
    int derived_var = 2;
    void display()
    {
        cout << "2.the value of the derived variable is " << derived_var << endl;
        cout << "2.the value of the base variable is " << base_var << endl;
    }
};
int main()
{
    base *base_class_pointer;
    derived *derived_class_pointer;

    derived obj_derived;
    base obj_base;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    // virtual function leads to bypassing of defualt behavior of pointer in classes
    return 0;
}