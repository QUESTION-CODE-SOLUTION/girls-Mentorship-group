#include<iostream>
#include<math.h>
using namespace std;

int base2tobase10(int num){
    int ans=1,count=0;
    while(num!=0){
        int rem=num%10;
        ans+=pow(2,count)*rem;
        count++;
        num=num/10;
    }
    return ans;
}
int main(){
   cout<<base2tobase10(13);
}
