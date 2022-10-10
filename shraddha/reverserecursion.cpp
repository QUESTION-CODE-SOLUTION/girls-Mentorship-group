#include <iostream>
using namespace std;
void fun (int n)
{
    if (n==6)
    return;
    fun(n+1);
    cout<<n<<" ";
}

int facto(int n)
{
    if(n==6)
    return 1;
    int ans=n*facto(n+1);
    return ans;
}
int main()
{
    fun(1);
    cout<<endl;
    cout<<facto(1);
    return 0;
}
