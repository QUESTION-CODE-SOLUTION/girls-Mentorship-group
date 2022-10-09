#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    int marks;
    void study(){
        cout<<name<<"can study"<<endl;
    }
};

int main (){
    student std1;
    std1.name="shakti";
    std1.rollno= 2002;
    std1.marks=89;
    cout<<std1.name<<" "<<std1.rollno<<" "<<std1.marks<<" ";
}
