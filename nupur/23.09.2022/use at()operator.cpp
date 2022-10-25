
#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main(){
    array<int,6>arr={1,2,3,4,5,6};
    cout<<"the array element are(using at())"<<endl;
for(int i = 0; i<6;i++){
    cout<<arr.at(i)<<" ";
    cout<<" ";
    cout<<arr[i]<<" ";
    cout<<endl;
}
return 0;
}
/*
the array element are(using at())
1  1 
2  2 
3  3 
4  4 
5  5 
6  6 
*/
