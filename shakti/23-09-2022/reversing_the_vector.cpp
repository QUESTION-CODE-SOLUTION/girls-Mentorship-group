#include <iostream>
#include<math.h>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[]={1,4,3,2};
    int a= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<=a/2; i++)
    {
        int n= arr[i];
        arr[i]=arr[a-1-i];
        arr[a-1-i]=n;
    } 
    for(int i=0; i<a; i++){
  cout<<arr[i]<<" ";
    }
}
