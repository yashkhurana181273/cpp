#include<iostream>
using namespace std;


int sum(int a,int b);//this is a prototype-->type function_name(arguments)
//only type is also acceptable in this prototype because these are formal parameters
int main(){
    
    //function and function prototype
    // functions can be straight described before main()
    int x, y;
    cout<<"enter the value of a and b"<<endl;
    cin>>x>>y;//actual parameters
    cout<<"the sum of a and b is:"<<sum(x,y);
    return 0;}
    //this is a function which is described after the end of the main code
    int sum (int a,int b){
        int c=a+b;//these are formal parameters
        return c;
    }
