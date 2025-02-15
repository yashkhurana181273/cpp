#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    static int count;

    public:
    void setid(void);
    void getid(void);
    static void getcount(void);
};
int employee::count;

void employee::setid(void){
cout<<"enter the id of the employee"<<endl;
cin>>id;
count++;
}
void employee ::getid(void){
    cout<<"the id of this employee is "<<id <<"and is employee number"<<count <<endl;

}
void employee::getcount(void){
    cout<<"the count is "<<count<<endl;

}
int main(){
    employee yash,angad,piyanshi;
    yash.setid();
    yash.getid();
    employee::getcount();
    angad.setid();
    angad.getid();
    employee::getcount();
    piyanshi.setid();
    piyanshi.getid();
    employee::getcount();

    return 0;
}