#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int p1,p2,j;
   string n,c;
   cout<<"enter your name : ";
   cin>>n;
  
   cout<<"Enter your 10th percentage\n";
   cin>>p1;
   
   
   cout<<"Enter your 12th percentage\n";
   cin>>p2;
   
   cout<<"Enter your jee percentile\n";
   cin>>j;
   
   cout<<"Enter your caste\n";
   cin>>c;
   
   if(p1 && p2 >= 75){
       cout<<"You are eligible for councling\n";
   }
   if(j>=95){
     cout<<"you are eligible for all the branches";
   }
   else if(j<=94 && j>=70){
       cout<<" You are eligiblr for bellow branches :  Information Technology,Datascience,Artificial Inteligence,Machine Learning with computer science,Internet Of Things,Civil,Mechanical,computer methametics,electronics and communication";
   }
   else if(j<=69 && j>=38){
       cout<<"You are elegibe for the following branches : electrical engineering,Civil Engineering,Mechanical Engineering,Petrochemical engineering";
   }
   else{
       cout<<"SORRY,NO BRANCHES IS ALLOTED TO YOU";}
   
   
   return 0;
  }
