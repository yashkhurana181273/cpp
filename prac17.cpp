#include<iostream>
using namespace std;
class y;
class x{
    int val1;
    friend void swap(x & a,y & b);

    public:

    void indata(int v){
    val1=v;
    }

    void display(void){
        cout<<"the value of val1 is"<<val1<<endl;
    }
};
class y{
    friend void swap(x & a,y & b);
    int val2;
    public:
    void indata(int b){
    val2=b;    
    } 

    void display(void){
        cout<<"the value of val2 is"<<val2<<endl;
    }
};
void swap(x & a,y & b){
   int temp=a.val1;
   a.val1=b.val2;
   b.val2=temp;

}

int main(){
    x a;
    a.indata(22);
    a.display(); 
    y b; 
    b.indata(29);
    b.display(); 

    swap(a,b);
    a.display(); 
    b.display(); 

    
    return 0;
}