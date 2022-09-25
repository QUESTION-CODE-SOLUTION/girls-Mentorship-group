
#include <iostream>
using namespace std;

int factors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
          cout<<"factors are "<<i<<endl;
    }
    return 0;
}

int main()
{
    factors(6);
}



output:-
  
factors are 1
factors are 2
factors are 3
factors are 6  
