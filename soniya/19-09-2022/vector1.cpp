#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>vec={10,20,30,40,50};
  cout<<vec.size()<<endl;
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  cout<<endl;
  vec.push_back(100);
  cout<<vec.size()<<endl;
  vec.push_back(200);
  vec.push_back(1000);


  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";
  }
  cout<<endl<<vec.size()<<endl;
  cout<<endl<<"size before pop back: "<<vec.size()<<endl;
  vec.pop_back();
  cout<<endl<<"size after pop back: "<<vec.size()<<endl;
  return 0;
  }

OUTPUT:-----
5
10 20 30 40 50
6
10 20 30 40 50 100 200 1000
8

size before pop back: 8

size after pop back: 7
