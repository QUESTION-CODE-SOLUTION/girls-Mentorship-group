#include <iostream>

using namespace std;

int main()
{
    float x,y,z;
    string n , c,ca;
     cout<<"Enter you name";
     cin>>n;
     cout<<"Enter your city";
     cin>>c;
     cout<<"Enter you caste";
     cin>>ca;
     cout<<"percentage of 10th";
     cin>>x;
     cout<<"Percentage of 12th";
     cin >>y;
     cout<<"JEE percentile ";
     cin>>z;
     if(x>60&&y>65&&z>20)
     {
         cout<<"you are eligible ";
     }
     else  { cout<<"you are not eligible ";
     }

    return 0;
}
