Que1 write a program to count a digits of number.

#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int count = 0;
    while (n>0)
    {
     n=n/10;
    count++;
    }
    cout<<count;
}



Que2 Write a program to reverse a number.

#include <iostream>
using namespace std;

int main() {
    int n,R;
    cout<<"Enter a number";
    cin>>n;
    int reverse_number =0;
    while ( n>0)
    {
        R =  n%10;
        reverse_number = R + 10* reverse_number;
         n=n/10;
    }
    cout<<reverse_number;
    return 0;
}



Que3 write a program to display a digit at their umit place.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,R;
    cout<<"Enter a number";
    cin>>n;
    int reverse_number;
    int count =0;
    while ( n>0)
    {
        R =  n%10;
        reverse_number = R*pow(10,count);
        cout<<reverse_number<<endl;
        n=n/10;
        count++;
    }
    
    return 0;
}
