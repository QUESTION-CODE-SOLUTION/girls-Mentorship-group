Display product of number except itself.
 Ans: #include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

void productexceptitself(vector<int>vec)
{
    vector<int>arr(vec.size(),0); 
    {
    int a=1;
    for(int i=0;i<vec.size();i++)
    {
        a=a*vec[i];
    }
     for(int i=0;i<arr.size();i++)
    {
       arr[i]=a/vec[i];
    }
    for(int i=0;i<arr.size();i++)
    {
    cout<<arr[i]<<" ";
    }
    }
}

int main()
{
    productexceptitself({1,4,5,6,3});
    return 0;
}
