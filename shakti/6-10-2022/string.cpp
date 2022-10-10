#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="abcdefg";  //string concatination
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    s=s+"hijk";
    cout<<s<<endl;
    s+=to_string(100);
    cout<<s;string s1="ABCDS";
    cout<<(s1<s)<<endl;

    string g;   //string true or false
    cin>>g;
    cout<<g;
    //string str;
    //getline((cin,str));
    //cout<<str;
    return 0;
}
