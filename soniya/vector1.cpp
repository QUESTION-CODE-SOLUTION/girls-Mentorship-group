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
________________________________________________________________________________
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>vec={10,20,30,40,50,60,70};
  vec[5]=60;
  
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  cout<<endl;
   cout<<vec.size()<<endl;
  //insert
  vec.insert(vec.begin()+3,35);
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";
}
  cout<<endl<<vec.size();
  cout<<endl<<"erase"<<endl;
  vec.erase(vec.begin()+3);
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  return 0;
}
OUTPUT:-----
10 20 30 40 50 60 70 
7
10 20 30 35 40 50 60 70
8
erase
10 20 30 40 50 60 70


