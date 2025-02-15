#include<iostream>
using namespace std;
class employee{
    public:
int salary=34;
int id;
employee(){}
employee(int inpID){
    id=inpID;
}
};
class programmar : public employee{
    public:
programmar(int inpId){
    id=inpId;}
    int languageCode=9;

}; 
int main(){
    employee yash(1),ashish(2),harsh(3);
    cout<<yash.salary<<endl;
    cout<<ashish.salary<<endl;
    cout<<harsh.salary<<endl;
    programmar skillF(2);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    return 0;
}