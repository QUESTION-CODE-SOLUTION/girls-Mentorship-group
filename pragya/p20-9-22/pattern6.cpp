/*
* * * * * * * * * *
* * * *     * * * * 
* * *         * * *
* *             * *
*                 *
*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=1 ; i<=5; i++)              
    {
        for(int j =5;j>=i;j--)
        {
            cout<<" * ";
        }
        for(int t=1;t<=i*2-2;t++)
        {
            cout<<"   ";
        }
        for(int k=5;k>=i;k--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
