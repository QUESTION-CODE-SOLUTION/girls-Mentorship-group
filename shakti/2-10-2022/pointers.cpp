#include<iostream>
using namespace std;

int main(){
int a=15;
int *p=&a;
cout<<a<<endl;
cout<<p<<endl;
cout<<"*p: "<<p<<endl;
*p=67;
cout<<"a "<<a<<endl;
cout<<"p: "<<p<<endl;
cout<<"*p: "<<*p<<endl;

int**q=&p;
cout<<"a: "<<a<<endl;
cout<<"p "<<p<<endl;
cout<<"*p "<<*p<<endl;
cout<<"q "<<q<<endl;
cout<<"*q "<<*q<<endl;

int arr[]={10,45,6,4,65};
cout<<*(arr+0)<<endl;
cout<<*(arr+1)<<endl;
cout<<*(arr+3)<<endl;
int*o=(arr+0);
cout<<o<<endl;
cout<< *(o+3)<<endl;

cout<<arr<<endl;
cout<<*(arr)<<endl;
cout<<arr[0]<<endl;
}
