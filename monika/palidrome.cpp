#include<iostream>

using namespace std;

    bool isPalindrome(int x) {
       if(x < 0)
        {
            return false;
        }
    long  n = x;
    long  reqNum = 0, remainder;
      while(x != 0)
    {
        remainder = x%10;
        reqNum = (reqNum*10)+remainder;
        x /= 10;
    }
    
    if(reqNum == n)
    {
        return true;
    }
     return false;
}
    int main()
    {    
       int x=161;
       int c=isPalindrome(x);
       if(c==0)
       {cout<<"false";}
       else{cout<<"true";}
        return 0;
    }