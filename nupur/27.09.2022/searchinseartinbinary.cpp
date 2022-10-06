#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortColors(vector<int>vec){
    bool a = true;
    for (int i = 0 ; i<vec.size();i++){
        for(int j =i+1 ; j<vec.size() ; j++){
            if (vec[i]>vec[j]){
                swap(vec[i],vec[j]);
                a=false;
            }
        }
        if (a){
            break;
        }
    }
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}

int main(){
    vector<int> vec={2,0,1,2,2,1,0};
    sortColors(vec);
}
