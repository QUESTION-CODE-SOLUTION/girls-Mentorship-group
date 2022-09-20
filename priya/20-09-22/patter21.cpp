#include <iostream>
using namespace std;

int main()
{
    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<"*";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    {
        for(int i=9;i>=1;i--)
        {
            for(int j=1;j<=10-i;j++)
           {
            cout<<"*";
           }
           for(int k=1;k<=i;k++)
           {
               cout<<" ";
           }
        cout<<endl;
        }
    }
    return 0;
}



outout:-
  
**********          
*********         
********        
*******       
******      
*****     
****    
***   
**  
* 
*         
**        
***       
****      
*****     
******    
*******   
********  
********* 

  
