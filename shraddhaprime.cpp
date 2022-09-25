display prime wnumber.
#include<iostream>
using namespace std;

void primenumber( int n)
{
    for( int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<n<<" is not prime number"<<endl;
            break;
        }
        else
        {
            cout<<n<<" is prime number"<<endl;
        }
        return;
    }
}
int main()
{
    primenumber(6);
}
