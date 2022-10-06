#include<iostream>
#include<vector>
using namespace std;

void productexceptitself(vector<int>vec){
    vector<int>arr(vec.size(),0);
    int a=1;
    for(int i=0; i<vec.size(); i++){
    a=a*vec[i];
    }
    for(int i=0; i<vec.size(); i++){
        arr[i]=a/vec[i];
    }
for(int i=0; i<vec.size(); i++){
    cout<<arr[i]<<" ";
}
}
int main(){
     vector<int>vec={1,2,3,4,5,6,7,8};
   productexceptitself(vec);
}
