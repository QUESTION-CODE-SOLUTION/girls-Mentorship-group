#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=16;i++)
    {
        for(int j=1;j<=16;j++)
        {
            if(i==1||i==16||i==8||j==8||j==1||j==16)
            cout<<"*";
           else
           cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}


output:-
  
****************
*      *       *
*      *       *
*      *       *
*      *       *
*      *       *
*      *       *
****************
*      *       *
*      *       *
*      *       *
*      *       *
*      *       *
*      *       *
*      *       *
****************
  
