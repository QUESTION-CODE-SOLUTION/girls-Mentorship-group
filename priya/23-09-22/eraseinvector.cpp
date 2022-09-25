#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int>vec={10,20,30,40,50,60,70,80,90};
   vec.erase(vec.begin()+6);
  
   cout<<vec.size()<<endl;
   
    for(int i=0;i<vec.size();i++)
    {
         cout<<vec[i]<<" ";
    }
    
}


output:-
 8
10 20 30 40 50 60 80 90 
  
