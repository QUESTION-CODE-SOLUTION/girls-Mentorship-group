
/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/

#include<iostream>
using namespace std; 
int main()
{
    int c=0;
    for(int i=1; i<=5;i++)
    {
        cout<<endl;
        for(int j=1;j<=i;j++)
        {
            if(j%2==1)
                cout<<"1";
            else
               cout<<"0";
            c++;
        }
    }
}

