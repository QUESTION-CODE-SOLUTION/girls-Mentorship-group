 void moveZeroes(vector<int>& nums) {
        int c=0;
        vector<int>vec={};
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
               vec.push_back(nums[i]);
            }
            else{
                c++;
            }
        }
        while(c)
        {
            vec.push_back(0);
            c--;
        }
            nums=vec;
            }
