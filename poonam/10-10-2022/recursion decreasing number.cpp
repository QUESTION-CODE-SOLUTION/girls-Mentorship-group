#include <iostream>
using namespace std;
void fun(int n)
{
    if (n==6)
    return;
    fun(n+1);
    cout<<n<<" ";
    
}
int main(){
fun(1);
cout<<endl;
return 0;
}

COMMENT: 5 4 3 2 1
    
also
    
    
    
    void fun(int n)
{
    if(n==0)
        return;
    cout<<n<<"";
    fun(n-1);
}
    
