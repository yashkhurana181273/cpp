#include<iostream>
using namespace std;
class base1{
    private:
    int data;
    public:
    base1(int i){
        data=i;
        cout<<"constructor called( base1 )"<<endl;;
    }
    void printdata_base1(void){
        cout<<"the value of base 1 is : "<<data<<endl;;
    }
};
class base2{
    private:
    int data1;
    public:
    base2(int i){
        data1=i;
        cout<<"constructor called( base2 )"<<endl;;
    }
    void printdata_base2(void){
        cout<<"the value of base 2 is : "<<data1<<endl;;
    }
};
class derived:public base1,public virtual base2{
private:
int d1,d2;
public:
derived(int a,int b,int c,int d):base1(a),base2(b){
d1=c;
d2=d;
}
void printderived(void){
    cout<<"the value of d1 , d2 is "<<d1<<" "<<d2<<endl;
}
};

int main(){
    derived d(1,2,3,4);
    d.printdata_base1();
    d.printdata_base2();
    d.printderived();
    return 0;
}