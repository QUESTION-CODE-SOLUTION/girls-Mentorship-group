#include <iostream>
using namespace std;
void fun (int n)
{
    if (n==0)
    return;
    fun(n-1);
    cout<<n<<" ";
}

int facto(int n)
{
    if(n==0)
    return 1;
    int ans=n*facto(n-1);
    return ans;
}
int main()
{
    fun(5);
    cout<<endl;
    cout<<facto(5);
    return 0;
}
