    /*pattern
    5 5 5 5 5 
    4 4 4 4
    3 3 3
    2 2
    1
          */
#include<iostream>
using namespace std;
int main()
{
     for(int i=1;i<=5;i++)
     {
        for(int j=5;j>=i;j--)
     {
        cout<<j<<" ";
        
     }  
        cout<<endl;
     }
     return 0;
}