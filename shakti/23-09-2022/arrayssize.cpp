#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<10; i++)
    { cout<<arr[i]<<endl;
       
        cout<<sizeof(arr[1])<<" ";
        cout<<sizeof(arr)<<" ";
        cout<<sizeof(arr)/sizeof(arr[0])<<endl;
        }
}



