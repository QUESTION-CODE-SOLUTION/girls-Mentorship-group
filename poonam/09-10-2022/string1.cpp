#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="abcdef";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    s = s+"hijk";  //concatination - adding new string//
    cout<<s<<endl;
    return 0;
}


COMMENT: abcdef
         6
         6
         abcdefhijk
