#include <iostream>
using namespace std;

int main()
{
   for(int i=1;i<=8;i++)
     { {
          for(int j=1;j<=8;j++)
      
      {
       if(i%2==0 && j%2==0)
          cout<<"#";
       
       else
          cout<<"*";
      }
      }
      cout<<endl;
     }
    return 0;
}

output:-
********
*#*#*#*#
********
*#*#*#*#
********
*#*#*#*#
********
*#*#*#*#  
