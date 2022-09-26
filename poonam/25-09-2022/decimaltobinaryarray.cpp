#include <iostream>
#include<math.h>
using namespace std;
 
 int base10tobase2(int num)
 {
     int ans=0, count=0;
     while(num!=0)
     {
         int rem=num%2;
         ans+=(pow(10,count)*rem);
         count++;
         num=num/2;
     }
     
     return ans;
 }
 int main()
 {
     cout<<base10tobase2(6);
    // base10tobase2(13);
     
    
 }



COMMENT: 1101
