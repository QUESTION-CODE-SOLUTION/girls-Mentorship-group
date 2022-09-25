#include <iostream>
#include <math.h>
using namespace std;

int base10tobase2(int n){
    int count=0, ans=0 ,rem ;
    while(n!=0){
        rem=n%2;
        ans+=pow(10,count)*rem;
        count++;
        n/=2;

    }
    return ans;
}

int base2tobase10(int n){
    int count=0, ans=0 ,rem ;
    while(n!=0){
        rem=n%10;
        ans+=pow(2,count)*rem;
        count++;
        n/=10;

    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    cout<<"Binary number of "<<n<<" is "<<base10tobase2(n)<<endl;
    cout<<"Enter a binary number : ";
    cin>>n;
    cout<<"Decimal number of "<<n<<" is "<<base2tobase10(n);

    return 0;
}


/*Enter a decimal number : 15
Binary number of 15 is 1110
Enter a binary number : 10001
Decimal number of 10001 is 17*/