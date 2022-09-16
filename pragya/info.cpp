#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
    string name,city,caste ;
    float per_10,per_12,percentile;

    cout << "Enter your name: " << endl;
    cin >> name;

    cout <<  "Enter your city :" << endl;
    cin >> city;
    
    cout << "Enter your caste :" << endl;
    cin >> caste;

    cout << "Enter your 10 th percent :" << endl;
    cin >> per_10;
    
    cout << "Enter your 12th percent: " << endl;
    cin >> per_12;
    
    cout << "Enter your JEE percentile : " << endl;
    cin >> percentile;
    
    
    cout << "Name is :" << name << endl;
    cout << "City is " << city << endl;
    cout << "Caste is " << caste << endl;
    cout << "Your 10th percentage is " << per_10 << endl;
    cout << "Your 12th percentage is " << per_12 << endl;
    cout << "Your JEE percentile is " << percentile << endl;

    if(caste=="gen" ||caste=="GEN" && percentile>=85.2 && per_12>=75)
    {
        cout << "You are eligible for admission" << endl;
    }
    else if(caste=="obc" ||caste=="OBC" && percentile>=71.9 && per_12 >=75)
    {
        cout << "You are eligible for admission" << endl;
    }
    else if(caste=="sc||st"||caste=="SC||ST" && percentile>= 49.8 &&per_12>=75)
    {
        cout << "You are eligible for admission" << endl;
    }


    return 0;
}

