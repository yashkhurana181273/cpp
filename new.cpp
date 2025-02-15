#include<iostream>
using namespace std;
int num2=55;//global variable(outside main())
int main()
{
cout <<"enter two numbers";   
int num1,num2;
cin>>num1>>num2;
cout<<"the sum of numbers provided is:"<<num1+num2 <<endl;
cout<<"global num2:"<<::num2 <<endl;
    return 0;
}




