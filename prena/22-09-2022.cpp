#include <iostream>
#include <math.h>
using namespace std;

int dtob(int n){
    int count=0, ans=0 ,rem ;
    while(n!=0){
        rem=n%2;
        ans+=pow(10,count)*rem;
        count++;
        n/=2;

    }
    return ans;
}

int btod(int n){
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
    cout<<"Binary number of "<<n<<" is "<<dtob(n)<<endl;
    cout<<"Enter a binary number : ";
    cin>>n;
    cout<<"Decimal number of "<<n<<" is "<<btod(n);

    return 0;
}


// Enter a decimal number : 9
// Binary number of 9 is 1001
// Enter a binary number : 1011
// Decimal number of 1011 is 11