#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int rollno;
    int marks;

    public:
    void  setName(string myname){
        name=myname;
    }
    void setrollno(int myrollno){
        rollno=myrollno;
    }
    void setmarks(int mymarks){
        marks=mymarks;
    }
    void study(){
        cout<<name<<"can study"<<endl;
    }
    string getname(){
        return name;
    }
    int getrollno(){
        return rollno;
    }
    int getmarks(){
        return marks;
    }
    student(string name, int rollno, int marks){
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;
    }
    student(){

    }

};
int main(){
    student std1;
    std1.setName("shakti");
    std1.setrollno(68);
    std1.setmarks(89);
    std1.study();
    cout<<std1.getname()<<" "<<std1.getrollno()<<" "<<std1.getmarks();
}
