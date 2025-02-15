#include<iostream>
using namespace std;
class base{
    public:
    int base_var;
    void display(){
        cout<<"the value of the base variable is "<<base_var<<endl;
    }
};
class derived:public base{
    public:
    int derived_var;
    void display(){
        cout<<"the value of the derived variable is "<<derived_var<<endl;
        cout<<"the value of the base variable is "<<base_var<<endl;
        
    }
};
int main(){
    base * base_class_pointer;
    derived * derived_class_pointer;


    derived obj_derived;
    base obj_base;

//base pointer can only accesss the base class and its member functions only
    base_class_pointer=&obj_derived;
    base_class_pointer->base_var=34;
    base_class_pointer->display();

    derived_class_pointer=&obj_derived;
    derived_class_pointer->derived_var=99;
    derived_class_pointer->display();


    
    return 0;
}