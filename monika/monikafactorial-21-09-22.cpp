#include<iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
  for(int i=1;i<=n;i++)
    {
        f=i * f;
    }
         return f ;
}
 int main()
 {
    factorial(5);
    cout<<factorial(5);
 }  