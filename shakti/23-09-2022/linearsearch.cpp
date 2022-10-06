#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void linearsearch(vector<int>arr, int n)   //n the value we want to search
{
    int ans=-1;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==n){
            ans=1;
            cout<<"the element is found at"<<i<<"index"<<endl;
            break;
        }
    }
    if (ans==-1)
    cout<<"element not found";
}
