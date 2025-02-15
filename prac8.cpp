#include<iostream>
using namespace std;
int bankreturns(int money,float rate=1.05){
    return money*rate;
}
int main(){
    int bankbalance=100000;
    cout<<"the rate of return for normal customers:"<<bankreturns(bankbalance);
    cout<<"the rate of return for VIP customers:"<<bankreturns(bankbalance,1.2);
    
    
    return 0;
}