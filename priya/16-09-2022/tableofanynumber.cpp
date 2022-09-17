#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"Table of";
    for(int i=1;i<11;i++)
    {
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }

    return 0;
}
