#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void getdata(void){
        cout<<"the value of a is :"<<a<<endl;
        cout<<"the value of b is :"<<b<<endl;
    }
    void setdata(int f1,int f2){
        a=f1;
        b=f2;
    }
};
int main(){
    
    //complex.c(3,7);
    // complex* ptr=&c;
    complex* ptr= new complex;
    ptr->setdata(5,6);
    (ptr)->getdata();
    // (*ptr).getdata();
    return 0;
}