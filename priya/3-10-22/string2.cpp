#include <iostream>
#include <string>

using namespace std;


//class
class student
{   public:
    string name;
    int rollno;
    int marks;
    
    void study()                      //method
    {
        cout<<name<<" can study"<<endl;
    }
    
    //constructor
    
    student(string name,int rollno,int marks)
    {
    this->name=name;
    this->rollno=rollno;
    this->marks=marks;
    }
    student()
    {
        
    }
};



//function
int main()
{
    student st1;
    st1.name="priya";
    st1.rollno=40;
    st1.marks=100;
    cout<<st1.name<<" "<<st1.rollno<<" "<<st1.marks<<" "<<endl;
    
    //after constructor
    st1.study();
    
    
    student st2;
    st2.name="poonam";
    st2.rollno=48;
    st2.marks=120;
    cout<<st2.name<<" "<<st2.rollno<<" "<<st2.marks<<" "<<endl;
    
    student st3("sakshi",33,189);
    cout<<st3.name<<" "<<st3.rollno<<" "<<st3.marks<<" "<<endl;
    

}


output:

priya 40 100 
priya can study
poonam 48 120 
sakshi 33 189 
