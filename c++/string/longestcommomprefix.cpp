#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
        // finding longest common prefix and the  vector of string...........
    // ["flower", "flow" ,"flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    // lexographically............
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    int n = v.size();
    string first = v[0];
    string last = v[n - 1];
    string s = "";
    for (int i = 0; i < (min(first.size(), last.size())); i++)
    {
        if (first[i] == last[i])
            s += first[i];
        else
            break;
    }
    cout <<endl<<"Longest common string in the string vector is :" <<s;

    return 0;
}