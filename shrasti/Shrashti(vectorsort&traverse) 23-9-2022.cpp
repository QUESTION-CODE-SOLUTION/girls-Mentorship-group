#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void traversalArray(vector<int>&vec)
{   int n=vec.size();
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
   vector<int>vec={1,3,5,2,7,8,9,7};
    sort(vec.begin(),vec.end());
    traversalArray(vec);
    return 0;
}
