#include<iostream>
using namespace std;
#include<vector>



void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>vec1=matrix;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    //cout<<matrix[i][j]<<" "<<i<<" i "<<j<<" j"<<endl;
                    for(int k=0; k<matrix.size(); k++){
                        vec1[k][j]=0;
                    }
                    for(int m=0; m<matrix[0].size(); m++){
                        vec1[i][m]=0;
                    }
                }
            }
          
}
  for(int i=0;i<vec1.size();i++)
    {
        for(int j=0;j<vec1[0].size();j++)
        {
            matrix[i][j]=vec1[i][j];
        }
      //  cout<<endl;
    }
           // matrix=vec1;
        }

int main(){
        vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
