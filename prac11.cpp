#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void check_bin(void);
    void invert(void);
    void display(void);
};
void binary::read(void) {
    cout<<"enter binary value in the string"<<endl;
    cin>>s;
}
void binary::check_bin(void){
    for ( int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary::invert(void){
    check_bin();
     for ( int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
        }
    }
void binary::display(void){
    cout<<"Displaying your binary number:"<<endl;
     for ( int i = 0; i < s.length(); i++)
    {cout<<s.at(i);
} 
cout<<endl; 
}    

int main()
{
binary b;
b.read();
// b.check_bin();
b.display();
b.invert();
b.display();

    return 0;
}