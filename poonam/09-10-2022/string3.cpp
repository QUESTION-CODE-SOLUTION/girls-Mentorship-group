#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="abcdef";
    cout<<s<<endl;
    s+=to_string(100);  //add integers with string//
    cout<<s<<endl;
    string s1="ABCDS";
    cout<<(s1>s)<<endl;
    cout<<(s1<s)<<endl;
    return 0;
}


COMMENT: abcdef
         abcdef100
         0
         1
