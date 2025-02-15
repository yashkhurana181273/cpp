#include<iostream>
using namespace std;
int counter=0;
class num{
public:
num(){
counter++;
cout<<"this is the time when constructor is called for object number"<<counter<<endl;
}
~num(){
    cout<<"this is the time when my instructor is called for object number"<<counter<<endl;
    counter--;
}
};
int main(){
    cout<<"entering main"<<endl;
    cout<<"creating an object"<<endl;
    num a;
    {
        cout<<"enetring a block"<<endl;
        cout<<"making two more objects"<<endl;
        num b,c;
        cout<<"exiting the block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}