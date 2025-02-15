#include<iostream>
using namespace std;
class shopItem{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"the id of item is: "<<id<<endl;
        cout<<"the id of price is: "<<price<<endl;
    }
};

int main(){
    int size=3;
    shopItem *ptr=new shopItem[size];
    shopItem *ptrtemp=ptr;
    int p;
    float q;
    for(int i=0;i<size;i++){
        cout<<"enter id and price for item :"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(int j=0;j<size;j++){
        cout<<"item no : "<<j+1<<endl;;
        (*ptrtemp).getdata();
        ptrtemp++;
    }

    return 0;
}