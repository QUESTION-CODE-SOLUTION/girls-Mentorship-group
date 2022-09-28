class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        c=0
        for i in nums:
            if(i==0):
                c+=1
                nums.remove(0)
                nums.append(0)
