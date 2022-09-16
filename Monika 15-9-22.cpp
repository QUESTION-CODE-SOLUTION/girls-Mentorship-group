#include <iostream>

using namespace std;

int main()
{
    float  a,b,c;
    string n,ct,cat;
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

        if( a>50 && b>50 &&c>70)
        {
            cout<<"Congrats! you can get admission in this college";
        }
        else{
            cout<<"sorry! you can't get admission in this college";
        }
    }
