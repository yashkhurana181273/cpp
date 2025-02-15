#include<iostream>
using namespace std;
class point{
    int a,b;
    public: 
    point(int ,int);
    void display(void){
        cout<<"the value of a and b is "<<a<<" "<<b<<endl;
    }

};
point::point(int x,int y){
    a=x;
    b=y;
}
int main(){
    //implicit call
    point p(3,6);
    p.display();
    point f=point(56,76);
    f.display();
    return 0;
}