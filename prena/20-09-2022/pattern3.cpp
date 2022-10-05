// *****
//  ****
//   ***
//    **
//     *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int k=0;k<i-1;k++){
            cout<<" ";
        }
        
        for (int j=n-i+1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
