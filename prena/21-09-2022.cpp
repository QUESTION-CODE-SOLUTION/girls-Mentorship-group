#include <iostream>
using namespace std;

int summ(int a,int b){
    int s=a+b;
    return (s);
}

int suum(int a=5, int b=0){
    int s=a+b;
    cout<<"suum a = "<<a<<" b = "<<b<<" s = ";
    return (s);
}




int factor(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}


bool prime(int n){
    bool d=true;
    if (n==0||n==1){
        cout<<"It is a not a prime number";
    }

    for(int i=2;i<n;i++){
        if (n%i==0){
            d=false;
            break;
        }
    }
    return d;
}
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool a=prime(n);
    if (a){
        cout<<"is a prime number";
    }
    else{
        cout<<"is not a prime number";
    }

    cout<<"Enter a number to get a factor : ";
    cin>>n;
    
    cout<<"Factor of "<<n<<" is "<<factor(n);
    
    int a=8,b=1,s;
    cout<<"summ a = "<<a<<" b = "<<b<<" s = "<<summ(a,b)<<endl;
    cout<<suum();
    return 0;
}
// O/p:
// Enter a number : 100
// is not a prime number

// Enter a number : 197
// is a prime number

// Enter a number : 71
// is a prime number

// Enter a number : 9
// Factor of 9 is 362880

// summ a = 8 b = 1 s = 9
// suum a = 5 b = 0 s = 5