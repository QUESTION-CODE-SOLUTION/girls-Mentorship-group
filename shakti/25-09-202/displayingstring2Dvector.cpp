#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void displayy(vector<vector<string>>vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec.size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
   
    vector<vector<string>>vec={{"abc","sdf"},{"sd"}};
    displayy(vec);
}
