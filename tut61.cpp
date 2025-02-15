#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream yout("sample60.txt");
    // string s;
    // cout<<"enter your name";
    // cin>>s;
    // yout<<"my name is "+s;
    // yout.close();
    ifstream yim("sample60.txt");
    string sf;
    getline(yim,sf);
    cout<<"this content is : "<<sf;

    return 0;
}