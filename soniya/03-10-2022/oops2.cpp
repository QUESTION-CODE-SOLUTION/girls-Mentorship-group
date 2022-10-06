
/// Online C++ compiler to run C++ program online
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    int marks;

    public:
    void setname(string  myname){
        name=myname;


    }
    void setrollno(int myrollno){
        rollno=myrollno;

    }
    void setmarks(int mymarks)
    {
        marks=mymarks;
    }
    void study()
    {
        cout<<name <<" can study"<<endl;

    }
    string getname(){
        return name;

    }
    int getrollno(){

    
        return rollno;
    }
    int getmarks()
    {
        return marks;
    }

 };
 int main(){
    student st1;
    st1.setname("sona");
    st1.setrollno(10);
    st1.setmarks(100);
    st1.study();

    cout<<st1.getname()<<" "<<st1.getrollno()<<" "<<st1.getmarks();
 }

//output:----
 //sona can study
//sona 10 100 




