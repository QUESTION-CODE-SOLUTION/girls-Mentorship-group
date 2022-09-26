#include <iostream>
#include <vector>
#include <string>
using namespace std;

void productofarr(vector<vector<char>>arr){

    for(int i=0;i<arr.size();i++){
        for(char ele:arr[i]){
            cout<<ele<<" ";
        }    
    }
}


int main(){
    vector<vector<char>>arr={{'h','e','l','l','o'},{'w','o','r','l','d'}};
    productofarr(arr);
}