#include<iostream>
#include<vector>
using namespace std;
                                                                            
int main() {
    vector<int>G1;
    //making vector 
    for ( int i =0;i<=5;i++) {
    G1.push_back(i);
    }
     for (auto  i =G1.cbegin();i!=G1.cend();i++) { 
cout<<*i;
        }

}
