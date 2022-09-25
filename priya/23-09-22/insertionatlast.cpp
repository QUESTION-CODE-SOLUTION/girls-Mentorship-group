
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int>vec={10,20,30,40,50};
   vec.push_back(60);
   vec.push_back(70);
   vec.push_back(80);
   vec.push_back(90);
   
   cout<<vec.size()<<endl;

   
    for(int i=0;i<vec.size();i++)
    {
         cout<<vec[i]<<" ";
    }
    
}


output:-
  
9
10 20 30 40 50 60 70 80 90 
