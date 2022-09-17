/*object- to print last no 

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
*/

/*object- to reverse a number 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is : ";
    while (n>0){
        cout<<n%10;
        n/=10;
    }
}*/

/* object- to print a multiplication table

#include <iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter a number whose muliplication table you want: ";
    cin>>n;
    cout<<"Multiplication table of "<<n<<" is :-"<<endl;
    while (i<=10){
        cout<<n<<" x "<< i << " = "<<n*i<<endl;
        i++;
    }
}
*/


/*
object- square of number

#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a number of digits : ";
    cin>>n;
    for (i=1;i<=n;i++){
        cout<<"Square of "<<i<<" is "<<i*i<<endl;
    }
}
*/

/*object - nested loop

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter number of lines you want : ";
    cin>>n;
    for (i=0;i<n;i++){
        for (j=0;j<i+1;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
}*/

/*object - count number of digits

#include <iostream>
using namespace std;
int main(){
    int c=0,n;
    cout<<"Enter number of digits : ";
    cin>>n;
    cout<<"Number of digits in "<<n<<" is ";
    for(n;n>0;){
        n/=10;
        c+=1;
    }
    cout<<c;
}
*/

