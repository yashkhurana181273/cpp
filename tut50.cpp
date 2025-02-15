#include<iostream>
using namespace std;

int main(){
    int n=7;
    int* ptr=&n;
    cout<<"the value at ptr is "<<*ptr<<endl;
    *ptr=999;
    cout<<"the value at ptr is "<<*ptr<<endl;
    //new operator
    int* p=new int (50);
    cout<<"value at p is "<<*p<<endl;
    //new operator in array
    float* arr=new float[5];
    arr[0]=10;
    arr[1]=30;
    arr[2]=50;
    arr[3]=60;
    arr[4]=70;
    delete[] arr;
   cout<<arr[0]<<endl;
   cout<<arr[1]<<endl;
   cout<<arr[2]<<endl;
   cout<<arr[3]<<endl;
   cout<<arr[4]<<endl;
    return 0;
}