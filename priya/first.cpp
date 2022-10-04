Q1) print 5time hello:-


#include <iostream>

using namespace std;

int main()
{
    int i=0;
    for(int i;i<=5;i++)
    {
    cout<<"hello"<<endl;
    }

    return 0;
}

output:-
hello
hello
hello
hello
heloo

Q2) counting:-

#include <iostream>


using namespace std;


int main()

{
   
 for(int i=0;i<=5;i++)
   
 {
   
   cout<<i<<endl;
   
  }

    
  return 0;

}


output:-
0
1
2
3
4
5

Q3)Table of any number:-

#include <iostream>
using namespace std;

int main()
{
    cout<<"write any number whose table is to be printed : ";
    int n;
    cin>>n;
    cout<<"Table of "<<n<<"is" ;
    for(int i=1;i<11;i++)
    {
    cout<<"\n"<<n<<"*"<<i<<"="<<n*i<<endl;
    }

    return 0;
}

output:-
write any number whose table is to be printed : 6
Table of 6is
6*1=6

6*2=12

6*3=18

6*4=24

6*5=30

6*6=36

6*7=42

6*8=48

6*9=54

6*10=60

Q4)square of a numbers form 1 to 10:-

#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Square of numbers from 1 to 10 are :- ";
    for(i=1;i<=10;i++)
    {
    cout<<"\n square of"<< i <<" is "<< i*i<<endl;
    }

    return 0;
}

output:-

quare of numbers from 1 to 10 are :- 
 square of1 is 1

 square of2 is 4

 square of3 is 9

 square of4 is 16

 square of5 is 25

 square of6 is 36

 square of7 is 49

 square of8 is 64

 square of9 is 81

 square of10 is 100

Q5)square of any number using while loop:-


#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Square of numbers from 1 to 10 are :- ";
     i=1;
    while(i<=10)
    {
    cout<<"\n square of"<< i <<" is "<< i*i<<endl;
        i++;
    }

    return 0;
}

output:-
Square of numbers from 1 to 10 are :- 
 square of1 is 1

 square of2 is 4

 square of3 is 9

 square of4 is 16

 square of5 is 25

 square of6 is 36

 square of7 is 49

 square of8 is 64

 square of9 is 81

 square of10 is 100


Q5)reverse the number using for loop:-

#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Write any number : " ;
    cin>>n;
    for(;n!=0;)
    {count=count*10;
    count=count+n%10;
       n=n/10;
    }
    cout<<"Reverse Number is "<<count<<endl;
    return 0;
}

output:-

Write any number : 4567
Reverse Number is 7654


Q6)reverse the nuber using while loop:-

#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Write any number : " ;
    cin>>n;
    while(n!=0)
    {count=count*10;
    count=count+n%10;
       n=n/10;
    }
    cout<<"Reverse Number is "<<count<<endl;
    return 0;
}

output:-

Write any number : 647558
Reverse Number is 855746

Q7)pattern making:-

#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    { for(j=1;j<=i;j++)
       {
        cout<<"hello";
        }
      cout<<"\n"<<endl;
    }
   
    return 0;
}

output:-

hello

hellohello

hellohellohello

hellohellohellohello

hellohellohellohellohello
