#include <iostream>
#include <vector>
using namespace std;

void productofarr(vector<int>&arr){
    vector<int>vec(arr.size(),0);
    int a=1;
    for(int ele:arr){
        if (ele==0){
            continue;
        }
        else{
            a=a*ele;
        }
    }
        cout<<a;
    for (int i=0;i<arr.size();i++){
        vec[i]=a/arr[i];
        }
    cout<<"new list is : "<<endl;
    for(int ele:vec){
        cout<<ele<<" ";
        }
    }

int main(){
    vector<int>arr={1,4,5,0,6,3};
    productofarr(arr);
}