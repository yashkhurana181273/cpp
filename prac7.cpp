#include<iostream>
using namespace std;
// int swap(int a,int b);
// void pointerswap(int* a,int* b){
//    int temp;
//    temp=*a;
//    *a=*b;
//    *b=temp;
// }
 void reference_variables(int & a,int & b){
   int temp;
   temp=a;
   a=b;
   b=temp;
}



int main(){
    /*call by value and call by reference*/
    //this will not change the value (swap)
    //call by value
    // int x,y;
    // x=45,y=56;
    // cout<<"the value of x and y before swap is:"<<x <<y <<endl;
    // swap(x,y);
    // cout<<"the value of x and y after swap is:"<<x <<y <<endl;



    //call by reference
    // int x,y;
    // x=4,y=5;
    // cout<<"the value of x and y before swap is:"<<x <<y <<endl;
    // pointerswap(&x,&y);
    // cout<<"the value of x and y after swap is:"<<x <<y <<endl;
    int x,y;
    x=4,y=6;
    cout<<"the value of x and y before swap is:"<<x <<y <<endl;
    reference_variables(x,y);
    cout<<"the value of x and y after swap is:"<<x <<y <<endl;
    
    

    return 0;
}
//  swap(int a,int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     return a,b;}
