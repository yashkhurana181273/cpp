#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int num);
    void get_roll_no(void);
};
void student::set_roll_no(int num)
{
    roll_no = num;
}
void student::get_roll_no(void)
{
    cout << "The roll no of the student is " << roll_no << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float num1, float num2);
    void get_marks(void);
};
void exam::set_marks(float num1, float num2)
{
    maths = num1;
    physics = num2;
}
void exam::get_marks(void)
{
    cout << "The marks in maths are " << maths << endl;
    cout << "The marks in physics are " << physics << endl;
}
class result : public exam
{
protected:
    float percentage;

public:
    void display(void);
};
void result::display(void)
{
    percentage = (maths + physics) / 2;
    cout << "The roll number is " << roll_no << endl;
    cout << "The marks in maths are " << maths << endl;
    cout << "The marks in physics are " << physics << endl;
    cout << "The percentage is " << percentage << endl;
}
int main()
{
 result yash;
 yash.set_roll_no(678);
 yash.set_marks(96.0,92.0);
 yash.display();
    return 0;
}