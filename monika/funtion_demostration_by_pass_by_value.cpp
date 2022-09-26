// C++ Program to demonstrate function definition
#include <iostream>
using namespace std;

int fun(int x)
{
	// definition of
	// function
	x = 30;
    return x;
}

int main()
{
	int a=34;
	fun(a);
	cout << "x = " <<a;
	return 0;
}
