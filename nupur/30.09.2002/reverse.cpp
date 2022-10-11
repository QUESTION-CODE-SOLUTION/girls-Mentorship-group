nes (17 sloc)  334 Bytes

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int>vec={1025,8,56,78,45,25,1};
    int s=vec.size();
  for(int i=0 ; i<vec.size()/2 ; i++){
      int n = vec[i];
      vec[i]=vec[s-1-i];
      vec[s-1-i]=n;
  }
   for(int i=0; i<s; i++){
        cout<<vec[i]<<" ";
    }
return 0;
}
Footer
© 2022 GitHub, Inc.
