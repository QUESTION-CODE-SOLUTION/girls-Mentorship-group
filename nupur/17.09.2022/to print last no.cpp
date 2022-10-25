#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num,n,i=0;
    cout<<"Enter a number :";
    cin>>num;
    while (num>0){
        n=(num%10)*pow(10,i);
        cout<<n<<endl;
        num/=10;
        i++;
    }
}
