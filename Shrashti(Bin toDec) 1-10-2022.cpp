#include<iostream>

#include <cmath>

using namespace std;
int binaryToDecimal(int n){
    int ans = 0, remainder, i = 0;

    // Until the value of n becomes 0.
    while(n != 0){
        remainder = n % 10;    
        ans += remainder * pow(2, i);
        i++; 

        // Remove the rightmost digit of n.
        n = n / 10;
    }
    
    return ans;
}

// Main function.
int main() {
    int  n = 10;
    int dec = binaryToDecimal(n);

    cout <<n << " in Decimal is: "<< dec << endl;

    return 0;
}
