#include<iostream>
using namespace std;
class complex{
    int a,b;
    friend complex setbysum(complex o1,complex o2);
    public:
    void setnum(int v1,int v2){
        a=v1;
        b=v2;
    }
    void display(void){
        cout<<"the complex number is "<<a <<"+"<<b<<"i"<<endl;
    }
};
complex setbysum(complex o1,complex o2){
    complex o3;
    o3.setnum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,c3;
    c1.setnum(1,2);
    c1.display();

    c2.setnum(3,4);
    c2.display();

c3=setbysum(c1,c2);
c3.display();
    
    return 0;
}