/*#include<iostream>
#include<vector>
using namespace std;

  void linearsearch(vector<int>&arr,int n){
    int ans=-1;
    for(int i=0; i<arr.size(); i++){
      if(arr[i]==n){
        ans=1;
        cout<<"element found at: " <<i<< " index"<<endl;
        break;
      
      
      }

    }
    if(ans=-1){
      cout<<"element not found";
      
    }

  }
  int main(){
    vector<int>vec={23,3,64,24,45,685,345,2,86,98,67};
    linearsearch(vec,685);
    linearsearch(vec,687);
    linearsearch(vec,24);
  return 0;

}
output:---
element found at: 5 index
element not found.
element found at: 3 index*/