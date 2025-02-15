#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;

    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setDataBySum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void print(){
        cout<<"your complex number is "<<a <<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex i,o,p;
    i.setdata(1,2);
    i.print();
    o.setdata(3,4);
    o.print();
    p.setDataBySum(i,o);
    p.print();
    
    return 0;
}