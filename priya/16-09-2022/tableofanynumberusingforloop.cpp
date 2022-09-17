#include <iostream>
using namespace std;

int main()
{
    cout<<"write any number whose table is to be printed : ";
    int n;
    cin>>n;
    cout<<"Table of "<<n<<"is" ;
    for(int i=1;i<11;i++)
    {
    cout<<"\n"<<n<<"*"<<i<<"="<<n*i<<endl;
    }

    return 0;
}

    

