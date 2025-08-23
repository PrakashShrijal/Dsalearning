#include <bits/stdc++.h>
using namespace std;
void parenthesis(string s, int op, int cl, int n)
{
    if (cl == n)
    {
        cout << s<< endl;
        return;
    }
    // if (s.size() == 2 * n) { // When we have a valid combination of length 2n
    //     result.push_back(s);
    //     return;
    
    
        if (op < n )
        {
            parenthesis(s + '(', op+1 , cl, n);
            
        }
        if (cl < op && cl<= n )
        {
            parenthesis(s + ')', op, cl+1, n);
            
        }
    
}
int main()
{
    int n;
    cout << "Enetr the number :";
    cin >> n;
    parenthesis("", 0, 0, n);
    return 0;
}