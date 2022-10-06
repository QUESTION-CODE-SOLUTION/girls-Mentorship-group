#include<iostream>
using namespace std;
void fun1(int num){
    num=num*10;
    cout<<num<<endl;
}
void fun2(int*p){
    *p=50;
    cout<<*p<<"\n";
}
void fun3(int &p)
{
    p=p+1;
    cout<<p<<"\n";
}


int main(){
    int num=100;
    fun1(num);
    cout<<num<<"\n";
    fun2(&num);
    cout<<num<<"\n";
    fun3(num);
    cout<<num<<"\n";

}
output:-----
  1000
100
50
50
51
51
