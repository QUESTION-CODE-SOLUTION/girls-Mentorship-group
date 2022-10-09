#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>vec={10,20,30,40,50,60};
    cout<<vec.size()<<endl;
    for(int i= 0 ; i< vec.size() ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
vec.push_back(100);
cout<<vec.size()<<endl;
vec.push_back(200);
vec.push_back(300);
for(int i= 0;i<vec.size();i++){
cout<<vec[i]<<" ";
}
   cout<<endl<<"size before popback"<<vec.size()<<endl;
vec.pop_back();
cout<<"size  popback"<<vec.size()<<endl;
return 0;
}
