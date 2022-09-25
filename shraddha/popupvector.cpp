write a program to insert no. in the array using vector.
Ans. #include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int>vec={1,2,4,6};
   vec.push_back(8);
   vec.push_back(10);
   vec.push_back(12);
   vec.push_back(14);
   
   cout<<vec.size()<<endl;

   
    for(int i=0;i<vec.size();i++)
    {
         cout<<vec[i]<<" ";
    }
    
}
