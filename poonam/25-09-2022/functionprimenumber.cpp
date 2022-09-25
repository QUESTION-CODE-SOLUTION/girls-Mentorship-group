#include<iostream>
using namespace std;

void primenumber( int n)
{
    int ans=0;
    for( int i=2; i<=n/2; i++)
    {
        if (n%i==0)
        {   
            int ans=1;
            cout<<n<<" is not prime number"<<endl;
           break;
        }
    }
        if(ans = 0)
        {
            cout<<n<<" is prime number"<<endl;
        }
        return;
    }

int main()
{
    primenumber(13);
}



COMMENT: 13 is a prime number.
