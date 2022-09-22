/* pattern
    */
#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<"* ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=6-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}