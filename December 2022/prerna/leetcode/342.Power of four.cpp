class Solution {
public:
    bool ispower(int n){
        if(n%4!=0)return false;
        n/=4;
        if(n==1)return true;
        else if(n<4)return false;
        return ispower(n);
    return false;
    }
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        bool ans=ispower(n);
        return ans;
    }
    
};
