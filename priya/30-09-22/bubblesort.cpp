#include <iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        bool swaped = false;
        for(int j=0;j<arr.size()-i-1;j++)
        {
            if (arr[j]>arr[j+1])
           {
              swaped=true;
              int t=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=t;
           }
        }
        if (swaped==false)
        {
            break;
        }
    }
    for (int ele:arr)
    {
        cout<<ele<<" ";
    }
    cout<<"\n";
}

int main()
{
   vector<int>arr={3,9,4,6,1,40,65,67,2};
   bubblesort(arr);
    return 0;
}


output:-
  
1 2 3 4 6 9 40 65 67 
  
