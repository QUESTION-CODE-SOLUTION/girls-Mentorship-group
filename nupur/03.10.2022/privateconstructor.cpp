#include <iostream>
#include <string>

using namespace std;

 //function to call private constructor
//class
class student
{   private:
    string name;
    int rollno;
    int marks;
    
    public:
    void setname(string myname)
    {
        name=myname;
    }
    void setrollno(int myrollno)
    {
        rollno=myrollno;
    }
    void setmarks(int mymarks)
    {
        marks=mymarks;
    }
    void study()
    {
        cout<<name<<" can study"<<endl;
    }
    string getname()
    {
        return name;
    }
    int getrollno(){
        return rollno;
    }
    int getmarks()
    {
        return marks;
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
    st1.setname("Nupur");
    st1.setrollno(89);
    st1.setmarks(100);
    st1.study();
    cout<<st1.getname()<<" "<<st1.getrollno()<<" "<<st1.getmarks()<<" "<<endl;

}
