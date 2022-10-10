#include <iostream>
#include<string>
using namespace std;
 int main(){
    string s="soniya";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    s=s+"monu";
    cout<<s<<endl;
    s+=to_string(100);
    cout<<s<<endl;
    string s1="Manisha";
    cout<<(s1>s)<<endl;
    cout<<(s1<s)<<endl;
    return 0;

output:---------
soniya
6
6
soniyamonu
soniyamonu100
0
1
