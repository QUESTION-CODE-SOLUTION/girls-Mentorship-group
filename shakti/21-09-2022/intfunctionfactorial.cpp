#include<iostream>
using namespace std;
int factorial(int n)
{
    int a=1;
    for(int i=1; i<=n; i++)
    {
        a=a*i;
    }
    cout<<a<<endl;
    return a;
}
int main(){
    factorial(4);
}
