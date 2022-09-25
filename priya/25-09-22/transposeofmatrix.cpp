#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

void display(vector<vector<int>>vec)
{
    cout<<"The original Matrix is..."<<endl;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix is...."<<endl;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>>vec={{1,2,3},{4,5,6},{7,8,9}};
    display (vec);
}



output:-
The original Matrix is...
1 2 3 
4 5 6 
7 8 9 
Transpose of matrix is....
1 4 7 
2 5 8 
3 6 9 
  
