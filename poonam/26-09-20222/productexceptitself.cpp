#include <iostream>
#include<vector>
using namespace std;
void productexcept(vector<int>vec)
{
    vector<int>arr(vec.size(),0);
    {
    int a=1;
    for( int i=0 ;i<=vec.size()-1;i++)
    {
        a=a*vec[i];
    }
       for( int i=0;i<=vec.size()-1;i++)
     {
         arr[i]=a/vec[i];
     }
     
     for(int i=0 ; i<vec.size();i++)
     {
         cout<<arr[i]<<" ";
     }
    }
}
   int main()
     {
         productexcept({1,4,5,6,3});
        
         return 0;
     }
  


COMMENT: 360 90 72 60 120 
