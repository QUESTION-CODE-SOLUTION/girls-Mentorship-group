#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void binarysearch( vector<int>arr,int element)
{
    sort(arr.begin(),arr.end());
    int ans = -1;
    int l=0,h=arr.size()-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==element)
        {
            ans=1;
            cout<<"Element found at "<<mid<<endl;
            break;
        }
        else if(arr[mid]<element)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(ans==-1)
    {
        cout<<"element not found\n";
    }
}
int main()
{
 binarysearch( {4,6,8,23,58,90},46);
    }
 Output displayed is " the element not found."


