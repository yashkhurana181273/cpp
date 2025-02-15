#include<iostream>
#include<iomanip>
using namespace std;

int main()
{//age selector-if else program
int age,b,c;


cout <<"Enter your age:";
cin >>age;
if (age<18){
    cout <<"you are not allowed in the hotel rooms"<<endl;
    }
else if(age>=18){
    cout<<"you are welcome in the hotel rooms"<<endl;
}
//switch case
switch (age)
{
case 1:
    cout<<"you are 1"<<endl;
    break;
case 18:
     cout<<"you are 18"<<endl;
    break;
case 67:
     cout<<"you are 67"<<endl;
    break;
case 15:
     cout<<"you are 15"<<endl;
    break;

default:cout<<"valid input"<<endl;
    break;
}
cout<<"enter value of b:";
cin>>b;
/*loops-for loop,while loop,do while loop*/
for (int i = 0; i<b; i++)
{
     cout<<"*"<<endl;
}


    return 0;
}