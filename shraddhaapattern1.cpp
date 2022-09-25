display:
"* * * * *    * * * * *
* * * *        * * * *
* * *            * * *
* *                * *
*                    *"

Ans. #include <iostream>
using namespace std;

int main()
{
    
     for (int i=0; i<=5; i++)
    {
        for (int j=0;j<=10;j++)
        {
          if( i+j<5)  
          {
              cout<<"*";
          }
          else
          {
              cout<<" ";
          }
          if(i+5<j)
          {
              cout<<"*";
          }
          else
          {
              cout<<" ";
          }
        }
        cout<<endl;
    }
    return 0;
}



