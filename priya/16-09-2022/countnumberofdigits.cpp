#include <iostream>
using namespace std;

int main()
{
    int n,count;
    cout<<"Write any number : " ;
    cin>>n;
    count=0;
    
    while(n!=0)
    {
       n=n/10;
        count++;
    }
    cout<<"The number of digits in given number is ";
    cout<<count;
    return 0;
}
