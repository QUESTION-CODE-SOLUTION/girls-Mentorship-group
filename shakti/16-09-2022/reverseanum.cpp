#include<iostream>
using namespace std;

int main(){
    int n,num =0;
    cout<<"write a number"<<endl;
    cin>>n;
    while(n!=0){
    num=num*10;
    num=num+n%10;
    n=n/10;}
    cout<<"reversing a number"<<num<<endl;
  
}
