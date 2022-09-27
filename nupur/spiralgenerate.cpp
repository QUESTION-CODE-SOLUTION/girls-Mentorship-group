//to print:
// 1 2 3 4 5 
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> vect(int n){ 
        //**Algorithm**
        // We follow the steps:
        // 1. move left o right
        // 2. move from top to bottom
        // 3. check the condition for continuation of the spiral(r1 < r2  &&  c1<c2)
        // 4. move right to left
        // 5. move bottom to top
        // repeat from 1 by r1++ , r2-- , c1++ , c2--.
        
        //declare the row variables:
        int r1 = 0;
        int r2 = n-1;
        
        //declare the column variables:
        int c1 = 0;
        int c2 = n-1;
        
        //elements in the matrix using:
        int counter = 0 ;
        
        //declare the vector matrix
        // n rows with each row having n no. of columns {vector<int> (n)}
        vector<vector<int>>vec(n , vector<int>(n));
        
        //start
        
        while(r1<=r2 && c1<=c2)
        {
                // 1. move left to right
                for(int i=c1 ; i<= c2 ; ++i)
                {
                        vec[r1][i] = ++counter;
                }
                
                // 2. move top to bottom
                for(int i=r1+1 ; i<= r2 ; i++)
                {
                        vec[i][c2] = ++counter;
                }
                
                // 3. check condition
                if(r1<r2 && c1<c2)
                {
                        // 4. move right to left
                        for(int i=c2-1 ; i>=c1 ; --i)
                        {
                                vec[r2][i] = ++counter;
                        }
                        
                        // 5. move bottom to up
                        for(int i=r2-1 ; i>r1 ; --i)
                        {
                                vec[i][c1] = ++counter;
                        }
                }
                
                // 6. repeat the process until the spiral is complete
                //rows
                r1++;
                r2--;
                
                //columns
                c1++;
                c2--;
        }
        for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                        cout<<vec[i][j]<<" ";
                }
                cout<<endl;
        }
        return vec;
}
int main(){   
        vect(5);
        
        return  0 ;
        
        
}