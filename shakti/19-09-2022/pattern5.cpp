* # * #
# # # #
* # * #
# # # #

 #include<iostream>
using namespace std;

int main(){
int i,j;
for(int i=1; i<=4; i++)
{
   for (int j=1; j<=4; j++)
   {
   if (j%2==0 || i%2==0)
   cout<<" # ";
   else cout<<" * ";
   }
cout<<endl;
}
}
