#include <iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&arr)
{
    for(int i=1;i<arr.size();i++)
    {
    int keys = arr[i];
    int j=i-1;
    while(j>=0 && arr[j] > keys)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1] = keys;
    }

  for(int ele:arr)
  {
    cout<<ele<<" ";
   }
}

int main()
{
   vector<int>arr={30,20,10,7,6,8,87,45,65,67,2};
   insertionsort(arr);
    return 0;
}


output:-
  
2 6 7 8 10 20 30 45 65 67 87   
