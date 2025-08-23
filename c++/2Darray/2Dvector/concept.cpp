#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v; 1d  vector
    // vector<vector<int> >v;  // put gap b/t >> for better
    // making of vector v[2][3];
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    vector<int> v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    vector<int> v3;
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);
    v3.push_back(13);
    v3.push_back(14);
    vector<vector<int>> v;
    // v.push_back(10);  this will give error why?
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    // cout<<v[2][3];
    for (int i = 0; i <= v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}