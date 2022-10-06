#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={10,30,56,89,76,54};
    sort(vec.begin(),vec.end(), greater<int>()); //decreasing order
    //  sort(vec.begin(),vec.end()); //increasing order
    for(int i=0; i<vec.size(); i++){
cout<<vec[i]<<" ";
}
return 0;
}
