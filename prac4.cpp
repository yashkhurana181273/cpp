#include<iostream>
using namespace std;

int main(){
    /*arrays using manual,do while and while*/
    int nih[]= {20,30,40,50,60};
    cout<<nih[0]<<endl;
    cout<<nih[1]<<endl;
    cout<<nih[2]<<endl;
    cout<<nih[3]<<endl;
    cout<<nih[4]<<endl;
    
int i=0;
while (i<5)
{
    cout<<nih[i]<<endl;
    i++;
}

int j=0;
do
{
    cout<<"the value of nih "<<j <<" is: " <<nih[j]<<endl;
    j++;
} while (j<5);




    


   
    //pointers and array
    int* p=nih;
    cout<<"the value at *p is:"<<*p<<endl;
    cout<<"the value at *p+1 is:"<<*(p+1)<<endl;
    cout<<"the value at *p+2 is:"<<*(p+2)<<endl;
    cout<<"the value at *p+3 is:"<<*(p+3)<<endl;
    cout<<"the value at *p+4 is:"<<*(p+4)<<endl;
     return 0;
}