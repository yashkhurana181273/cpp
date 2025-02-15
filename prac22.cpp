#include<iostream>
using namespace std;
class number{
int a;
public:
number (){
    a=0;
}
// number(number &val){
//     a=val.a;
//     cout<<"constructor called!!!!!!!!!!!!"<<endl;
// }
number (int value){
    a=value;
}
void display(void){
    cout<<"the value is"<<a<<endl;
}
};
int main(){
    number x(78),b,s,f1;
    x.display();
    b.display();
    s.display();
    number x1(x);
    x1.display();
    number z1=x;
    z1.display();
    f1=x;
    f1.display();
    return 0;
}