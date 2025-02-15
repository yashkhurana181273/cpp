#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;//abstract base class(meant to be inherited)
    //=0 makes a function to do nothing 
};
class CWHvideo : public CWH
{
    float vlen;

public:
    CWHvideo(string s, float r, float v) : CWH(s, r)
    {
        vlen = v;
    }
    void display()
    {
        cout << "the title of the video is :" << title << endl;
        cout << "the rating of the video is :" << rating << endl;
        cout << "the length of the video is :" << vlen << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "the title of the video is :" << title << endl;
        cout << "the rating of the video is :" << rating << endl;
        cout << "the length of the video is :" << words << endl;
    }
};
int main(){
string title;
float rating,vlen;
int words;

title="this is a cpp pro video";
rating=5.00;
vlen=5.43;
CWHvideo django=CWHvideo(title,rating,vlen);
// django.display();


title="this is a cpp pro text";
rating=5.00;
words=543;
CWHtext django1=CWHtext(title,rating,words);
// django1.display();

CWH* hello[2];
hello[0]=&django;
hello[1]=&django1;
hello[0]->display();
hello[1]->display();
return 0;
}
/* They cannot be static.
   They are accessed by object pointers.
   Virtual functions can be a friend of another class.
   A virtual function in the base class might not be used.
   If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class. */