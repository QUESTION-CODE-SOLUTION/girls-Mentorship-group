    /*pattern
    * # * #
    # # # #
    * # * #
    * # # #
    */
#include<iostream>
using namespace std;
int main()
{
     for(int i=1;i<=4;i++)
     {
        for(int j=1;j<=4;j++)
        {
            if(j%2==1 && i%2==1)
            {
                cout<<"*";
                cout<<" ";
            }
            else{
                 cout<<"#";
                 cout<<" ";
            }
            
        }
        cout<<endl;
     }
     return 0;
}