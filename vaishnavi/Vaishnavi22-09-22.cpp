// print pattern
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *

#include<iostream>
using namespace std; 

int main(){
    int i,j,k,l;
    for (i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--){
            cout<<"*";}
        
        // cout<<endl;
         for(k=1;k<=i+i;k++){
             cout<<" ";
         }
         for(l=5;l>=i;l--){
             cout<<"*";
         } cout<<endl;
    
    }
    
}
