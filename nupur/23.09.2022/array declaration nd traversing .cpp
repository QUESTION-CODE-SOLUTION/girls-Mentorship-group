#include<iostream>
using namespace std;
int main(){
    int arr[10] ;
    for(int i = 0;i<10; i++){
        cout<<"Enter an element : ";
        cin>>arr[i];
        cout<<endl;
    }
      cout<<endl;
    for(int i = 0; i <10 ; i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    cout<<endl<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)<<endl;
    //length of array..
    cout<<sizeof(arr)/sizeof(arr[0]);
return 0;
}
/*
Enter an element : 1
Enter an element : 2
Enter an element : 3
Enter an element : 4
Enter an element : 5
6Enter an element : 6
Enter an element : 7
Enter an element : 8
Enter an element : 9
Enter an element : 10

1 2 3 4 5 6 7 8 9 10 

4
40
10
*/

