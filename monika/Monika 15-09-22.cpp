
#include <iostream>

using namespace std;

int main()
{
    float  a,b,c;
    string n,ct,cat,gen,obc,st,sc;
     cout<<"Enter you name   ";
     cin>>n;
     cout<<"Enter your city   ";
     cin>>ct;
     cout<<"Enter you category   ";
     cin>>cat;
     cout<<"percentage of 10th  ";
     cin>>a;
     cout<<"Percentage of 12th  ";
     cin >>b;
     cout<<"JEE percentile ";
     cin>>c;
    if(cat=="gen")
    {
        if(c>70)
        {
            cout<<"Congrats! you can get admission in this college";
        }
        else{
            cout<<"sorry! you can't get admission in this college";
        }
    }
    if(cat=="obc")
    {
        if(c>60)
        {
            cout<<"Congrats! you can get admission in this college";
        }
        else{
            cout<<"sorry! you can't get admission in this college";
        }
    }
    if(cat=="st")
    {
        if(c>50)
        {
            cout<<"Congrats! you can get admission in this college";
        }
        else{
            cout<<"sorry! you can't get admission in this college";
        }
    }
    if(cat=="sc")
    {
        if(c>40)
        {
            cout<<"Congrats! you can get admission in this college";
        }
        else{
            cout<<"sorry! you can't get admission in this college";
        }
    }
}