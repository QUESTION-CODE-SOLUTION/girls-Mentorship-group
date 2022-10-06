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
