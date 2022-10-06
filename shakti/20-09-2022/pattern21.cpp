* * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * *
*               *

#include<iostream>
using namespace std;
int main(){
   for(int i=5; i>=1; i--)
   {
    for(int j=1; j<=i; j++ )
    {
        cout<<" * ";
    } 
   
    for(int k=5;k>=i;k--)
    {
        cout<<"   ";
    }
    for(int k=5;k>=i;k--)
    {
        cout<<"   ";
    }
     for(int j=1; j<=i; j++ )
    {
        cout<<" * ";
    } 
 cout<<endl;
   } 
}
