#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>vec={10,20,30,40,50,50,30};
    vec[5] = 60;
    for(int i= 0 ; i< vec.size() ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
vec.insert(vec.begin()+3,35);
for(int i=0; i<vec.size() ; i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
vec.insert(vec.begin()+3,35);
for(int i=0; i<vec.size() ; i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
vec.erase(vec.begin()+3);
for(int i=0; i<vec.size() ; i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
return 0;
}
//OUTPUT
/*10 20 30 40 50 60 30 
10 20 30 35 40 50 60 30 
10 20 30 35 35 40 50 60 30 
10 20 30 35 40 50 60 30 8*/


