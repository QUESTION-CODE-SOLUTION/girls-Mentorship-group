    /*pattern
    1 
    0 1
    0 1 1
    1 0 1 0
    1 1 1 0 1
          */
#include<iostream>
using namespace std;
int main()
{
       int c= 1;   
     for(int i=1;i<=5;i++)
     {
        for(int j=1;j<=i;j++)
     {
        if(c%2==1 || c%3==0)
        {
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
        c++;
     }  
        cout<<endl;
     }
     return 0;
}