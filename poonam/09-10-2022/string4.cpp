#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="abcdef";
    cout<<s<<endl;
    s+=to_string(100);  //add integers with string//
    cout<<s<<endl;
    string g;
    cin>>g; // no space will be there//
    cout<<g;
    string str;
    getline(cin,str); //for white space in string//
    cout<<str;
    return 0;
}


COMMENT: abcdef
         abcdef100
 INPUT:  1 3 4 56 
         1 3 4 56 
