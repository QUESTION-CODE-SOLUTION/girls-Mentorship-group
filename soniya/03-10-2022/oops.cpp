#include<iostream>
using namespace std;
#include<string>
class student{
    public:
    string name;
    int rollno;
    int marks;

    void study()
    {
        cout<<endl;
        cout<<name  <<" can syudy";

    }
    
    student (string name,int rollno,int marks)
    {
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;

    }
    student()
    {

    }

};
int main(){
    student st1;
    st1.name="sonu";
    st1.rollno=5;
    st1.marks=100;
    cout<<endl;
    cout<<st1.name<<" "<<st1.rollno<<" "<<st1.marks;
    st1.study();
    student st2;
    st2.name="soniya";
    st2.rollno=6;
    st2.marks=99;
    cout<<endl;
    cout<<st2.name<<" "<<st2.rollno<<" "<<st2.marks<<endl;
    student st3("sona",4,90);
    cout<<st3.name<<" "<<st3.rollno<<" "<<st3.marks<<endl;


}

output:----
 sonu 5 100
sonu can syudy
soniya 6 99
sona 4 90
