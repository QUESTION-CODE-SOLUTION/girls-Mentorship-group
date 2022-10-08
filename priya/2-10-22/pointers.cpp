#include <iostream>
using namespace std;

void fun1 (int num)
{
    num=num*10;
    cout<<num<<endl;
}
void fun2(int*p)
{
    *p=50;
    cout<<*p<<"\n";
}
void fun3(int &p)
{
    p=p+1;
    cout<<p<<"\n";
}


int main()
{
  int num (100);
  cout<<num<<endl;
  fun1(num);
  fun2(&num);
  return 0;
}


output:-
  
100
1000
50
  
