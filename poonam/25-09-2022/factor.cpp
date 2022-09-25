#include<iostream>
using namespace std;

int factor(int n)
{
    for( int i=1; i<=n ; i++)
    {
        if(n%i==0)
        cout<< "factors are "<<i<<endl;
    }
        return 0;
}

int main()
{
     factor(8);
}



COMMENT: factors are 1
         factors are 2
         factors are 4
         factors are 8
