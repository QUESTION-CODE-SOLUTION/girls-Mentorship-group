#include <iostream>
using namespace std;
int main()
{
    string name,city, caste;
    float num1,num2,num3;
    cin>>name>>city>>caste;
    cin>>num1>>num2>>num3;
    std::cout<<"your name is " <<name<<endl;
    std::cout<<"your city is "<<city<<endl;
    std::cout<<"your caste is "<<caste<<endl;
    std::cout<<"your 10th  percentage is "<<num1<<endl;
    std::cout<<"your 12th  percentage is "<<num2<<endl;
    std::cout<<"your jee score is "<<num3<<endl;
    if (num3>85)
    {
        cout<<"you are eligible for admission in SATI";
    }
    else
    { 
        cout<<"you are not eligible for admission in SATI";
    }
    return 0;
}
