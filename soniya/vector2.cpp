#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>vec={100,202,30,40,500,60,70};
  sort(vec.begin(),vec.end());
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  cout<<endl;
}
OUTPUT:--------
30 40 60 70 100 202 500 
______________________________________________________________



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>vec={100,202,30,40,500,60,70};
  sort(vec.begin(),vec.end(),greater<int>());
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  cout<<endl;
}
OUTPUT:---
500 202 100 70 60 40 30 