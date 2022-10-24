// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,8,10};
//traversing...
for(int i = 0 ; i < 5; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
//FOR FINDING THE SIZE OF ARRAY..
int i;
int size = sizeof(arr)/sizeof(arr[i]);
for(int i = 0 ; i < size; i++){
    cout<<arr[i]<<" ";
}
//SIZE OF ALL THE ELEMENS PRESENT IN THE ARRAY...
cout<<endl;
 cout<<sizeof(arr)<<" ";
 cout<<endl;
 //SIZE OF EACH LEMENS PRESENT IN THE ARRAY...
 cout<<sizeof(arr[i])<<" ";
 cout<<endl;
 ////TO FIND THE NUMBER OF ELEMENYTS PRESENT IN THE ARRAY...
 cout<<sizeof(arr)/sizeof(arr[i]);
return 0;
}
/*
2 4 6 8 10 
2 4 6 8 10 
20 
4 
5
*/
