#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>umap;
    umap["hii"]=1;
    umap["hello"]=2;
    umap["hello"]=3;
    umap["o_soneo"]=4;
    // for traversal
    for(auto x:umap)
    {
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }
    umap["hello"]++;
    for(auto x:umap)
    {
        cout<<x.first<<" "<<x.second<<" "<<endl;

    }



}