#include<iostream>
#include<vector>
#include<string>
using namespace std;

void display(vector<vector<int>>vec)
{
    for(int i=0; i<vec.size();i++)
    {
        for(int j=0; j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>>vec={{1,2,3,},{4,5,6},{7,8,9}};
    display(vec);
        
}




COMMENT: 1 2 3 
         4 5 6 
         7 8 9 
