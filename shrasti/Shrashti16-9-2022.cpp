#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x,y,z;
    string n , c, cat,sc,st,obc,gen;
     cout<<"Enter you name";
     cin>>n;
     cout<<"Enter your city";
     cin>>c;
     cout<<"Enter you caste";
     cin>>cat;
     cout<<"percentage of 10th";
     cin>>x;
     cout<<"Percentage of 12th";
     cin >>y;
     cout<<"JEE percentile ";
     cin>>z;
     if(cat=="st") {

     
     if(x>50 && y> 50 &&z>20)
     {
         cout<<"you are eligible for admission";
     } }
     if(cat=="sc") {

     
     if(x>50 && y> 50 &&z>30)
     {
         cout<<"you are eligible for admission";
     } }
     if(cat=="obc") {

     
     if(x>50 && y> 50 &&z>40)
     {
         cout<<"you are eligible for admission";
     } }
if(cat=="gen") {

     
     if(x>50 && y> 50 &&z>50)
     {
         cout<<"you are eligible for admission";
     } }
     else  { cout<<"you are not eligible ";
     }

    return 0;
}
