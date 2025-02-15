#include<iostream>
using namespace std;
class complex;
class calc{
    public:
    int sum(int a,int b){
        return (a+b);
    }
    int sumrealcomplex(complex o1,complex o2);
    int sumimgcomplex(complex o1,complex o2);
};
class complex{
    int a,b;
    friend int calc::sumrealcomplex(complex o1,complex o2);
    friend int calc::sumimgcomplex(complex o1,complex o2);

    public:
    void setnum(int v1,int v2){
        a=v1;
        b=v2;
    }
    void display(void){
        cout<<"your complex number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
int calc::sumrealcomplex(complex o1,complex o2){
        return (o1.a+o2.a);}
int calc::sumimgcomplex(complex o1,complex o2){
        return (o1.b+o2.b);}
int main(){
    complex a,b;
    a.setnum(1,2);
    a.display();

    b.setnum(3,4);
    b.display();

    calc kela;
    int c=kela.sumrealcomplex(a,b);
    int c1=kela.sumimgcomplex(a,b);

    cout<<"the sum of real part is :"<<c<<endl;
    cout<<"the sum of img part is :"<<c1<<endl;

    return 0;
}