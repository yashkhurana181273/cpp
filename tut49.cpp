#include<iostream>
using namespace std;
class test{
    private:
    int a,b;
    public:
    test(int i,int t):a(i),b(a*8*8*8){
        cout<<"constructor called "<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    test tu(3,4);

    return 0;
}