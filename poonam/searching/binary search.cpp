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
    
    
    binarysearch( {36,18,20,48,97,63},63);
    return 0;
}
 


Comment: Element found at 4.
