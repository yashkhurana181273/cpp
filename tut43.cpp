#include<iostream>
using namespace std;
class base{
    public:
    void greet(void){
        cout<<"hello world"<<endl;
    }
};
class base2{
    public:
    void greet(void){
        cout<<"hello guys and girls"<<endl;
    }
};
class derived:public base,public base2{
    int a;
    public:
    void greet(void)
    {
        base::greet();
    }

   
};
int main(){
    base b1;
    b1.greet();
    base2 b2;
    b2.greet();
    derived d;
    d.greet();

    return 0;
}