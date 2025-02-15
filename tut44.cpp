#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_roll(int num){
        roll_number=num;
    }
    void print_roll(void){
        cout<<"your roll number is: "<<roll_number<<endl;
    }
};
class test:virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float a,float b){
        maths=a;
        physics=b;
    }
    void print_marks(void){
        cout<<"your marks in maths are :"<<maths<<endl;
        cout<<"your marks in physics are :"<<physics<<endl;
    }
};
class sport:virtual public student{
    protected:
    int score;
    public:
    void set_score(int s){
        score=s;
    }
    void print_score(void){
        cout<<"your sports score is :"<<score<<endl;
    }
};
class result:public test,public sport{
    protected:
    int total_marks;
    public:
    void display(void){
        print_roll();
        print_marks();
        print_score();
        cout<<"the total result is :"<<score+maths+physics<<endl;
    }
};
int main(){
    result yash;
    yash.set_roll(678);
    yash.set_marks(99.9,93.8);
    yash.set_score(89.0);
    yash.display();
    return 0;
}