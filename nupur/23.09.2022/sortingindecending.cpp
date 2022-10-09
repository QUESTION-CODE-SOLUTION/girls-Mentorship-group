#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int>vec={1025,8,56,78,45,25,1};
   sort(vec.begin(),vec.end(),greater<int>());
  for(int i=0 ; i<vec.size() ; i++){
      cout<<vec[i]<<" ";
  }
return 0;
}
