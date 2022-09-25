int main()
{
   vector<int>vec={10,20,30,40,50};
   
   vec.pop_back();
   vec.pop_back();
 
   
   cout<<vec.size()<<endl;

   
    for(int i=0;i<vec.size();i++)
    {
         cout<<vec[i]<<" ";
    }
    
}



output:-
3
10 20 30 
  
