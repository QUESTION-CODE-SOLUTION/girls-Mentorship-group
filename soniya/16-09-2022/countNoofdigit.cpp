#include <iostream>
using namespace std;

int main(){
    int num, count = 0;
    // Asking for input
    cout << "Enter a number: ";
    cin >> num;

    // Counting total number of digits
    for( num; num>=1; count++){
        num = num / 10;

    }

    // Displaying output
    cout << "Total no. of digits: " << count << endl;
    return 0;
}
