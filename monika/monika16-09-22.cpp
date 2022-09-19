#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
int main()
{
    //to print reverse of given numrber 
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"reverse of the given number is  : ";
    int i=0;
    int r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        i++;
         cout<<r;
    }
        cout<<endl;
    //to count no. of digit in given number
    int a=0;
    
    cout<<"number of digits : ";
    while(n>0)
    {
        n=n/10;
        a++;
    }
     cout<<a<<endl;
    
    //to print a pattern 

      return 0;
}