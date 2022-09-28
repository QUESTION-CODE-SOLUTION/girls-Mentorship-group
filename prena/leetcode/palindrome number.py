class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        num=x
        y=0
        while x>0:
            y=y*10+x%10
            x//=10
        print(y)
        if num==y:
            return(True)
        else:
            return(False)
