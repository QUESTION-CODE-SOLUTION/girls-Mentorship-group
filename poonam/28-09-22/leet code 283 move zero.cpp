class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int a=0;
        vector<int>vec{};
        for( int i = 0 ; i<nums.size()-1;i++)
        {
            if(nums[i]!=0)
            {
                nums.push_back(nums[i]);
            }
         else{
             a++;
         }
        }
      while(a)
     {
       vec.push_back(0);
       a--;
    }
     nums=vec;
        
        
    }
    
};



COMMENT: 

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
