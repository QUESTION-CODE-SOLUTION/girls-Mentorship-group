// count no. of digits using for loop

#include<iostream>
using namespace std;
int main()
{
    for (int i=1;i<=10;i++)
    {
        cout<<i<<endl;
    }
}

// table of a no using for loop

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: "<< endl;
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}

// square of a number using for loop

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    for(int i =1;i<=10;i++)
    {
        cout<<"Square of "<<i<< " is "<<pow(i,2)<<endl;
    }
}

// count no. of digits using while loop


#include<iostream>
using namespace std;
int main()
{
    int count=0,n=1;
    while(n<11)
    {
        cout<<n<<endl;
        n++;
    }
    return 0;
}

// table of a no using while loop

#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"Enter number: "<<endl;
    cin>>num;
    while(i<=10)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
        i++;
    }
    return 0;

}

// square of a number using while loop

#include<iostream>

using namespace std;
int main()
{
    int i=1;
    while (i<=10)
    {
        cout<<"square of "<<i<<" is "<< i*i<<endl;
        i++;
    }
}

// use of break

#include<iostream>
using namespace std;
int main()
{
    int count=0,n=1,i;
    cout<<"enter i: ";
    cin>>i;
    while(n<11)
    {
        cout<<n<<endl;
        if(n==i)
        {
            break;
        }
            
        n++;
    }
    return 0;
}

// reversing a number

#include<iostream>
using namespace std;
int main()
{
    int num,x,y,z=0;
    cout<<"Enter the number : "<< endl;
    cin>> num;
    while(num>0)
    {
        x=num%10;
        num=num/10;
        z=x;
        
        cout<<z;
    }
}

// expanding a number 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,a ,count=0;
    cout<<"Enter number"<<endl;
    cin>>num;
    while(num>0)
    {
        a=(num%10)*pow(10,count);
        num=num/10;
        count++;
        cout<<a<<endl;
    }
    
    return 0;
}