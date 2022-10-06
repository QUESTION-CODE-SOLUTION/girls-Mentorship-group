#include<iostream>
using namespace std;

void factor(int n)
{
    
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
cout<<i<<endl;
    }
    return ;
}
int main(){
    factor(56);

}
