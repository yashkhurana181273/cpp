#include<iostream>
using namespace std;

int main(){
    int a=3;
    /*pointers*/
    //address operator &
    int* b=&a;
    cout<<b<<endl;
    cout<<&a<<endl;
   //dereferencing operator(value of operator)
    cout<<*b<<endl;
    cout<<a<<endl;
    return 0;
}