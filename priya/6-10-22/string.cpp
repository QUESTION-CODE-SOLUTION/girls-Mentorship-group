#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="abcdefg";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    s=s+"hijk";                      //concatination
    cout<<s<<endl;
    s+=to_string(100);
    cout<<s<<endl;
    string s1="ABCDE";
    cout<<(s1>s)<<endl;
    cout<<(s1<s)<<endl;
    string g;
    cin>>g;
    cout<<g;
    
    return 0;
}

output:-
  
abcdefg
7
7
abcdefghijk
abcdefghijk100
0
1
qazwsxe
qazwsxe
