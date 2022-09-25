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
    vector<int>vec={23,34,44,55,67,78,87};
    linearsearch(vec,123);
    linearsearch(vec,44);
    linearsearch(vec,78);
}
      
      
      
output:-
Element not found 
Element found at 2 index
Element found at 5 index

      
      
