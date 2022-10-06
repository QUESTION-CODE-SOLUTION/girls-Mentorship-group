#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string name,c;
    int p1,p2,R;
    cout<<"Enter your name-";
    cin>>name;
    cout<<"Enter your caste-";
    cin>>c;
    cout<<"Enter your 10th percentile-";
    cin>>p1;
    cout<<"Enter your 12th percentile-";
    cin>>p2;
    
    cout<<"YOU ARE ELIGIBLE THIS BRANCH ACCORDING TO JEE RANK\n";
    
    cout<<"Enter your jee All india rank-";
    cin>>R;
    //cout<<"You are eligiable below Branch";
    if(R<=100){
        cout<<"you are eligible computer science branch";
    }
    if(R>=100&&R<=500){
        cout<<"you are eligible IT branch";
    }
     if(R>=500&&R<=1000){
        cout<<"you are eligible ELECTRONIC AND COMMUNICATION branch";
    }
     if(R>=1000&&R<=5000){
        cout<<"you are eligible CIVIL/MECHENICAL branch";
    }
     if(R>=5000&&R<=10000){
        cout<<"you are eligible CHEMICAL/PERTOCHEMICAL branch";
    }
    else{
    }
  
cout<<"\nname : "<<c<<"\ncaste : "<<c<<"\n10th percentage : "<<p1<<"\n12th percentage : "<<p2<<"\nJEE percentile : "<<R;
 return 0;
}
