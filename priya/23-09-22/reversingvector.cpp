#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>vec{1,3,5,6,7,8,9};
    cout<<"Reverse vector:"<<endl;
    for(int i=vec.size()-1 ; i>=0 ; i--)
    {
        cout<<vec[i]<<" ";
    }
        return 0;
}



output:-
Reverse vector:
9 8 7 6 5 3 1   
