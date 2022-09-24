#include<iostream>
#include<math.h>
using namespace std;
int factors(int n)
{    
    cout<<"factors are :";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i!=n)
        {
            cout<<i<<" * ";
        }
      if(i==n)  
      {
        break;
      }
      
}     
          return n ;
}
int main(){
    int n=24;
   cout<<factors(24) ;
}