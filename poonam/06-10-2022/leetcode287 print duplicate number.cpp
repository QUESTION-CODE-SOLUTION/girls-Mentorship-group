class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int c =0;
        for(int i=0 ; i<nums.size()-1; i++)
        {
            for( int j=1;j<nums.size();j++)
            {
                if(nums[i]=nums[j])
                    c=nums[i];
            }
        }
        return c;
        
    }
};

COMMENT : 

Your input
[1,3,4,2,2]
Output
2
Expected
2
