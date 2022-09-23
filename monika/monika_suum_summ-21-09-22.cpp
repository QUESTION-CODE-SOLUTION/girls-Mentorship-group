#include<iostream>
using namespace std;
int summ(int a,int b)
{    int s;
    s=a+b;
    return s;
}
int suum(int =4,int= 6)
{

  int s =4+6;
    return  s;
}
int main()
{    int a, b;
    cout<<"Enter number a : ";
     cin>>a;
   cout<<"Enter number b : ";
     cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is : "<<summ(a,b)<<endl;
    cout<<"call of suum function is :  "<<suum()<<endl;
      return 0;
}