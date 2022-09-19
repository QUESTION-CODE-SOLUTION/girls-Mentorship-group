#include <iostream>
using namespace std;

int main()
{
    int c=1;
   for(int i=1;i<=8;i++)
     { 
          for(int j=1;j<=i;j++)
      {
           if(c%2==1)
           cout<<"1";
           else
           cout<<"0";
           c++;
      }
      cout<<endl;
     }
    return 0;
}


output:-
  
1
01
010
1010
10101
010101
0101010
10101010
  
