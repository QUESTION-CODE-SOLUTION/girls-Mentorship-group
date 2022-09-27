#include<iostream>
using namespace std;
int main(){
    int arr[10] = {10,20,30,40,50,60,70,80,90};
    for(int i = 0;i<10; i++){
        cout<<"Enter an element : ";
        cin>>arr[i];
        cout<<endl;
    }
    for(int i = 0; i <10 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr)/sizeof(arr[0]);

return 0;
}


