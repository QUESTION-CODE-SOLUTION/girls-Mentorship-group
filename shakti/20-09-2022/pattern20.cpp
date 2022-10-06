       *
      * *
    * * *
  * * * *
* * * * *
  * * * *
    * * *
      * * 
        * 

#include<iostream>
using namespace std;
int main(){
   int i;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5-i; j++)
       cout<<"   ";
    for(int k=i; k>=1; k--)
    {cout<<" * ";
    }
    
    cout<<endl;
    }
    for(int i=1; i<=5; i++)
    {
    for(int j=1; j<=i; j++)
    cout<<"   ";
    for(int k=1; k<=5-i; k++)
    {cout<<" * ";}
cout<<endl;
    }
}
