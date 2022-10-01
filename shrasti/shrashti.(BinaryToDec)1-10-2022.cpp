#include<iostream>
#include <cmath>

using namespace std;
int DecimaltoB(int n){
    int ans = 0, remainder, i = 0;

    // Until the value of n becomes 0.
    while(n != 0){
        remainder = n % 2 ;    
        ans += remainder * pow(10, i);
        i++; 

        // Remove the rightmost digit of n.
        n = n / 2;
    }
    
    return ans;
}

// Main function.
int main() {
    int  n = 4;
    int dec = DecimaltoB(n);

    cout <<n << " in Decimal is: "<< dec << endl;

    return 0;
}
    
