#include <iostream>
using namespace std;

void decn(int n){
    if (n==0){
        return ;
    }
    cout<<n<<" ";
    decn(n-1);
}

int main(){
    decn(5);
    return 0;
}
