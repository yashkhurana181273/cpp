#include<iostream>
using namespace std;

int main(){
    /*structures,unions and enums*/
    struct student
    {
        int id;
        char section;
        int age;
    };
    
    union highest_grade_subject{
        //1 for true
        int english;
        int maths;
        int science;
    };
    struct student raghav;
    raghav.id=345;
    raghav.section='b';
    raghav.age=5;

cout<<raghav.id<<endl;
cout<<raghav.section<<endl;
cout<<raghav.age<<endl;

    union highest_grade_subject rg;
    rg.maths=1;
    rg.english=05;
     
cout<<rg.maths<<endl;     

    enum chicks{piyanshi,manreet,ashmi};
    chicks m1=piyanshi;

cout<<m1<<endl;
cout<<piyanshi<<endl;
cout<<manreet<<endl;
cout<<ashmi<<endl;
    return 0;
}