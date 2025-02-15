#include<iostream>
using namespace std;
  class BankDeposit{
       int principal;
       int years;
       float interestrate;
       float returnvalue;

       public:
    //    BankDeposit(){}
       BankDeposit(int a,int b,int c);
       BankDeposit(int a,int b,float c);
       void show();
  };
  BankDeposit::BankDeposit(int a,int b,int c){
    principal=a;
    years=b;
    interestrate=float(c)/100;
    returnvalue=principal;
    for(int i=0;i<years;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
  }
  BankDeposit::BankDeposit(int a,int b,float c){
    principal=a;
    years=b;
    interestrate=c;
    returnvalue=principal;
    for(int i=0;i<years;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
  }
  void BankDeposit::show(){
    cout<<"the return vale after interest of "<<interestrate<<" ater "<<years <<" year/s is "<<returnvalue<<" on amount "<<principal<<endl;
  }
int main(){
    // BankDeposit b1,b2,b3;
    int a,b,c;
    float C;
    cout<<"enter values"<<endl;
    cin>>a>>b>>c;
    BankDeposit b1= BankDeposit(a, b, c);
    b1.show();

    cout<<"enter values"<<endl;
    cin>>a>>b>>C;
    BankDeposit b2= BankDeposit(a, b, C);
    b2.show();

    // b3.show();
    return 0;
}