#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={6,5,4,3,2,1};
    int s=vec.size();
    for(int i=0; i<s/2; i++){
        int n=vec[i];     
        vec[i]=vec[s-1-i];
        vec[s-1-i]=n;
    }
    for(int i=0; i<s; i++){
        cout<<vec[i]<<" ";
    }
}
