1
0 1
0 1 1
1 0 1 0
1 1 1 0 1

#include<iostream>
using namespace std;
 int main(){
    int n;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        
        if (i==2 && j==1 || i==3 && j==1 || i==4 && j==2 || i==4 && j==4 || i==5 && j==4)
        cout<<" 0 ";
        else cout<<" 1 ";
        
        cout<<endl;
    }
 }

