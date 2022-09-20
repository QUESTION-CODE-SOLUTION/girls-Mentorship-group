//1

// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * *

// #include <iostream>
// using namespace std;
// int main(){
//   int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//----------------------------------------------------------
//2

// 12345
// 12345
// 12345
// 12345
// 12345

// #include <iostream>
// using namespace std;
// int main(){  int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//       cout<<j;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//-------------------------------------------------------------
//3

// 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// #include <iostream>
// using namespace std;
// int main(){  int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//-------------------------------------------------------------
//4

// * # * # * 
// * # * # *
// * # * # *
// * # * # *
// * # * # *

// #include <iostream>
// using namespace std;
// int main(){  int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//       if(j%2==0){
//         cout<<"# ";
//       }
//       else{
//         cout<<"* ";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//--------------------------------------------------------
//5

// * # * # * 
// # # # # #
// * # * # *
// # # # # #
// * # * # *

// #include <iostream>
// using namespace std;
// int main(){  int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//       if(j%2!=0 && i%2!=0){
//         cout<<"* ";
//       }
//       else{
//         cout<<"# ";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//----------------------------------------------------------
//6

// * * * * * 
// * # * # *
// * * * * *
// * # * # * 
// * * * * *

// #include <iostream>
// using namespace std;
// int main(){  int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//       if(j%2==0 && i%2==0){
//         cout<<"# ";
//       }
//       else{
//         cout<<"* ";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//-----------------------------------------------------
//7

// * 
// * *
// * * *
// * * * *
// * * * * *

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//-------------------------------------------------------
//8

// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//-----------------------------------------------------
//9

// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//------------------------------------------------------
//10

// * * * * * 
// * * * *
// * * *
// * *
// *

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=n;i>=1;i--){
//     for (int j=1;j<=i;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//-------------------------------------------------
//11

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=n;i>=1;i--){
//     for (int j=1;j<=i;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//--------------------------------------------------
//12

// 7 6 5 4 3 2 1 
// 7 6 5 4 3 2
// 7 6 5 4 3
// 7 6 5 4
// 7 6 5
// 7 6
// 7

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=n;j>=i;j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//----------------------------------------------------
//13

// 1 
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0 1

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j,c=1;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//       if(c%2==1){
//         cout<<"1 ";
//       }
//       else{
//         cout<<"0 ";
//       }
//       c++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//--------------------------------------------------------
//14

// 1 
// 0 1
// 0 1 1
// 1 0 1 0
// 1 1 1 0 1
// 0 1 1 1 0 1

// #include <iostream>
// using namespace std;
// int main(){  
//   int i,n,j,c=1;
//   cout<<"Enter number of lines:";
//   cin>>n;
//   for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//       if(c%2==1||c%3==0){
//         cout<<"1 ";
//       }
//       else{
//         cout<<"0 ";
//       }
//       c++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }
