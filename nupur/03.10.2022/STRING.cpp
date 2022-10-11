#include <iostream>
#include <string>

using namespace std;


//class
class student
{   public:
    string name;
    int rollno;
    int marks;
};

//function
int main()
{
    student st1;
    st1.name="NUPUR";
    st1.rollno=89;
    st1.marks=100;
    cout<<st1.name<<" "<<st1.rollno<<" "<<st1.marks<<" ";

}
//NUPUR 89 100 
