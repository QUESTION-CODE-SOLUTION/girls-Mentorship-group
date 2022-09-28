class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j=1;
        for(int i=0; i<=nums.size()-1;i++)
        {
            if( nums[i]!=nums[i+1])
            {
                nums[j]=nums[i+1];
                    j++;
            }
            arr[j] = arr[n-1];
        }    
        
        return j;
    }
};


COMMENT:
your input
[1,1,2]
Output
[1,2]
Expected
[1,2]
