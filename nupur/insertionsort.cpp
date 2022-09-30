#include<iostream>
#include<vector>
using namespace std;
void insersionsort(vector<int>&arr){
for(int i = 1 ; i < arr.size() ;i++ ){
int j = i-1;
int key = arr[i];
while(j>=0 && arr[j]>key) {
arr[j+1]=arr[j];
j--;}
arr[j+1] = key;
}
for(int ele:arr){
cout<<ele<<" ";
}
}
int main(){
vector<int>arr= {3,8,2,4,9,6,};
insersionsort(arr);
return 0;
}