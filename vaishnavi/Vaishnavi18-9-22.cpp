#include<iostream>
    using namespace std;
int main()
{
    // counting using for loop
    for(int i=1;i<=100;i++)
    {
        cout<<i<<endl;
    }
    //table by using for loop
    int n=7;
    cout<<"table of "<<n<< " is given below "<< endl;
    for(int a=1; a<11;a++)
    {
          cout<<n<<"*"<<a<<"="<<n*a<<endl;
    }
    //squaring of number by using for loop
     for(int b=30;b>0;b--)
     {
        cout<<"square of "<<b<<" is "<<b*b<<endl;
     }
     // counting using while loop
     int c=1;
    while(c<=100)
    {
        cout<<c<<endl;
        c++;
    }
    //table by using while loop
    int m=7;
    int d=1;
    cout<<"table of "<<m<< " is given below "<< endl;
    while(d<11)
    {
          cout<<n<<"*"<<d<<"="<<m*d<<endl;
          d++;
    }
    //squaring of number by using while loop
    int e=30;
     while(e>0)
     {
        cout<<"square of "<<e<<" is "<<e*e<<endl;
        e--;
     }
     //example of do while
      int p=1;
     do{
        cout<<"hello"<<endl;
        p++;
     } 
     while(p<11);
    //example of loop control statement
    for (int x=1;x<21;x++) 
    {
        cout<<x<<endl;
        if(x==7)
        {
            break;
        }        
    }
    //example of continue
    for(int y=1;y<30;y++)
    {
        cout<<y<<endl;
        if(y==10)
        {
            cout<<"skip"<<endl;
            continue;
         }
        if(y==20)
        {
          cout<<"skip"<<endl;
            continue;
        }
    }
//to print a pattern 
    int n=17897;
    int r,p,b=0;
    while(n!=0)
    {
        r=n%10;
        p=r*pow(10,b);
                n=n/10;
        
        cout<<p<<endl;
        b++;
    }
//Reverse

  int u, re = 0, E;

  cout << "Enter an integer: ";
  cin >> u;

  while(n != 0) {
    E = u % 10;
    re = re * 10 + E;
    u/= 10;
  }

  cout << "Reversed Number = " << re;

  return 0;


      

}
