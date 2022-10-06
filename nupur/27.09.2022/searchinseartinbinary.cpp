Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

int searchInsert(vector<int>& nums, int target) {
    int l = 0, n = nums.size(), r = n - 1, ans=-1, mid;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]<target)
        {
            ans = mid;
            l = mid+1; 
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans+1;
}


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
return lower_bound(nums.begin(), nums.end(), target)- nums.begin();
        
    }
