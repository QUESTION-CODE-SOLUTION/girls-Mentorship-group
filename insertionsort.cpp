#include<iostream>
using namespace std;
#include<vector>
 void insertionsort(vector<int>&arr)
 {
    for (int i=1;i<arr.size();i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int ele:arr)
    {
        cout<<ele<<" ";
    }
 }
 int main()
 {
    vector<int>arr={1,34,54,8,7,9,5,0,13};
    insertionsort(arr);
    return 0;
 }