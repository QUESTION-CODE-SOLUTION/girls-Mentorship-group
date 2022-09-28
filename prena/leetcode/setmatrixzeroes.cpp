class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rowz(matrix.size(),1);
        vector<int> columnz(matrix[0].size(),1);
        for (int i=0; i<matrix.size();i++){
            for (int j=0; j<matrix[0].size();j++){
                if (matrix[i][j]==0){
                    rowz[i]=0;
                    columnz[j]=0;
                    
                }
            }
        }
        for (int i=0; i<matrix.size();i++){
            for (int j=0; j<matrix[0].size();j++){
                if(rowz[i]==0 || columnz[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        
    }
};
