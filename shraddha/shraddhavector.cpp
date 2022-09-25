#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

void linearsearch(vector<int>&arr,int n)

{
    int ans=-1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==n)
        {
            ans=1;
            cout<<"Element found at "<<i<<" index"<<endl;
            break;
        }
    }
        if(ans==-1)
        {
            cout<<"Element not found "<<endl;
        }
    
}
int main()
{
    vector<int>vec={365,45,64,89,567,456,230,4,93};
    linearsearch(vec,4);
    linearsearch(vec,567);
    linearsearch(vec,82);
}
output displayed is 
Element found at 7 index
Element found at 4 index
Element not found 
