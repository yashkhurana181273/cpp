#include<iostream>
using namespace std;
// recursion and recursive function
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);}

int fib(int n){
    if(n<=2){
         return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int a,choice;
    cout<<"enter 0 for factorial or 1 for fibonacci";
    cin>>choice;
    if(choice=0){
        cout<<"enter a value for a number";
        cin>>a;
        cout<<"the value of the factorial of "<<a<<" is " <<factorial(a);
    }
    else if(choice=1){
        cout<<"enter a value for a number";
        cin>>a;
        cout<<"the value of the fibonacci at "<<a<<" is "<<fib(a);

    }
    return 0;
}