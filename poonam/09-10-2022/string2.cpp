#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="abcdef";
    cout<<s<<endl;
    s+=to_string(100);  //add integers with string//
    cout<<s;
    return 0;
}



COMMENT: 

abcdef
abcdef100
