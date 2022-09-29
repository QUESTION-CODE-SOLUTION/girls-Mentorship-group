#include <iostream>
#include <vector>
using namespace std;
void imaze(vector<vector<int>> v)
{
    int i, j;
    for (i = 0; i < v.size(); i++)
    {
        for (j = i + 1; j < v[i].size(); j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    for (i = 0; i < v.size(); i++)
    {
        for (j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
    cout << "imaze of matrix" << endl;

    for (i = 0; i < v.size(); i++)
    {
        for (j = 0; j < v[i].size() / 2; j++)
        {
            swap(v[i][j], v[i][v[i].size() - j - 1]);
        }
    }
    for (i = 0; i < v.size(); i++)
    {
        for (j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}
void display(vector<vector<int>> vec)
{
    int i, j;
    for (i = 0; i < vec.size(); i++)
    {
        for (j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j];
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "display matrix" << endl;
    display(v);
    cout << "transpose matrix" << endl;

    imaze(v);

}
