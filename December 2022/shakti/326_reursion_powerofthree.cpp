class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        if(n==0 || n%3!=0){
            return false;
        }
        int ans= isPowerOfThree(n/3);
        return ans;
    }
};
