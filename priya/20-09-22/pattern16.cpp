#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10-i;j++)
        {
           cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
  
  
  output:-
    
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
   
