 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

  int findDuplicate(vector<int>& nums) 
        {
            int ans;
            sort(nums.begin(),nums.end());
             for(int i=0;i<nums.size();i++)
                {    if(nums[i]==nums[i+1])
                        {   ans=nums[i];
                          break;
                        }
                }
            return ans;
        }
    int main()
        {    
            vector<int>nums={3,1,3,4,2};
            cout<<findDuplicate(nums);
            return 0;
        }
