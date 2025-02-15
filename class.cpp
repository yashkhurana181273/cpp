#include<iostream>
#include<cmath>
using namespace std;
class PrimaryToDecimal{
    private:
    long BinaryNumber;
    public:
    PrimaryToDecimal(long bin){
        BinaryNumber=bin;
    }
    int convert(){
        int DecimalNumber=0,i=0;
        long Tempbinary=BinaryNumber;
        while(Tempbinary!=0){
        int lastdigit=Tempbinary%10;
        DecimalNumber=DecimalNumber+lastdigit*pow(2,i);
        Tempbinary=Tempbinary/10;
        i++;
    }
    return DecimalNumber;
    }
};

int main(){
    int binary;
    cout<<"enter a number to convert into binary number :"<<endl;
    cin>>binary;
    PrimaryToDecimal p(binary);
    int decimal =p.convert();
    cout<<decimal;

    return 0;
}