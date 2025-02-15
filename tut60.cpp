#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // string s="happy valentines day";
    // ofstream out("sample60.txt");
    // out<<s;
    
    string s2;
    ifstream in("sample60.txt");
    // in>>s2;
    getline(in,s2);
    cout<<s2;
    return 0;
}