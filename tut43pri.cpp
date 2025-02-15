#include<iostream>
using namespace std;
class base1{
    public:
    void say(void){
        cout<<"namaste"<<endl;

    }
    
};
class base2:public base1{
    public:
    void say(void){
        cout<<"yayyyyyyy"<<endl;
    }
};
int main(){
    base1 gi;
    gi.say();
    base2 hi;
    hi.say();
    
    return 0;
}