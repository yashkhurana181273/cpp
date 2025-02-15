#include<iostream>
#include<cmath>
using namespace std;
class point{
    friend void distance(point o1,point o2); 
    int x,y;
    public:
    point(int a,int b){
      x=a;
      y=b;
    }
   void displaypoint(void){
    cout<<"the value is"<<"("<<x<<","<<y<<")"<<endl;
   }
   

   
};
void distance(point o1,point o2){
  float dist=sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
cout<<dist<<endl;
}
int main(){
    point c(23,33);
    c.displaypoint();

    point p=point(55,65);
    p.displaypoint();

    distance(c,p);
    return 0;
}