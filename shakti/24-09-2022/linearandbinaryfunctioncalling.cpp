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

void binarysearch(vector<int>arr, int element)
{
    sort(arr.begin(), arr.end());
    int ans=-1;
    int l=0,h=arr.size()-1;
    while(l<=h){
        int mid=1+h/2;
        if(arr[mid]=element){
            ans=1;
            cout<<"element found"<<endl;
            break;
        }
        else if(arr[mid]<element){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    if(ans==-1){
        cout<<"element not found"<<"\n";
    }
}
int main(){
    vector<int>vec={23,3,64,24,45,285,345,2,86,98,67};
    linearsearch(vec,685);
    linearsearch(vec,67);
    linearsearch(vec,45);
    binarysearch(vec,45);
    return 0;
}
    
