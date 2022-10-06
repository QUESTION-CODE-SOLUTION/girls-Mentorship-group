#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void display(vector<vector<int>>vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec.size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transposematrix(vector<vector<int>>&vec){
    vector<int>arr(vec.size(),0);
    int t,j;
    for(int i=0; i<vec.size()-1; i++)
    {
        for(int j=i+1; j<vec[i].size(); j++){
        int t= vec[i][j];
        vec[i][j]=vec[j][i];
        vec[j][i]=t;
    }
    cout<<endl;
}
for(int i=0;i<vec.size();i++)
     {
         
     for(int j=0;j<vec[i].size();j++)
    {
    cout<<vec[i][j]<<" ";
    }
    cout<<endl;
     }
    
 }
int main(){
    vector<vector<int>>vec={{1,2,3},{4,5,6},{7,8,9}};
    display(vec);
    
    cout<<"transpose :";
    transposematrix(vec);
return 0;

}



