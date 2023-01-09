class Solution {
public:
    bool isPowerOfFour(int n) {
    
      if(n==1){
          return true;
      } 
     
      if(n==0 || n%4 !=0){
          return false;
      }
      bool ans= isPowerOfFour( n/4);
      return ans;
      
        
      
    }
};
