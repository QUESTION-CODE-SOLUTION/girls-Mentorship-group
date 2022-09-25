sort the vector.
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
   vector<int>vec={10,140,55,344,66,11,20,380,90};
   sort(vec.begin(),vec.end());
  
   cout<<vec.size()<<endl;
   
    for(int i=0;i<vec.size();i++)
    {
         cout<<vec[i]<<" ";
    }
    return 0;
}
