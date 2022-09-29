#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

    void moveZeroes(vector<int>& nums){
        
        int j=0,n=nums.size();
       for(int i=0;i<n;i++) 
       { 
           if (nums[i]!=0)
           {
              swap(nums[j],nums[i]);
               j++;
                         
           }
       }
       
         for(int i=0;i<nums.size();i++)
         {
            cout<<nums[i]<<" ";
         }
       
    }
    int main()
    {
        vector<int>nums={0,0,1,3,15};
        moveZeroes(nums);
        return 0;
    }
