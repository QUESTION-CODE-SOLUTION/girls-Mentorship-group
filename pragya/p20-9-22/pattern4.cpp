
/*
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=5;i++)
{
    for(int k=1;k<=i;k++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for(int i=4;i>0;i--)
{
    
    for(int k=i;k>=1;k--)
    {
        cout<<"*";
    }
    cout<<endl;
}
}
