#include <bits/stdc++.h>
using namespace std;
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2; // *,/
}
string prefix(string val1, string val2, char ch){
    // prefix -> op , val1, val2...
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int main()
{
    string s = "7+9+5*4/8-3"; // infix expression
    // we need two stacks, 1 for vals , 1 form ops
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(to_string(s[i] - 48));
        }
        else
        {
            // s[i] it is-> *,/,+,-
            if (op.size() == 0 || prio(s[i]) > prio(op.top()))
                op.push(s[i]);
            else
            { // priority (s[i]) <= priority (op.top())
                while (op.size() > 0 && prio(s[i]) <= prio(op.top()))
                {
                    // i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = prefix(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() > 0)
    {
        // work
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = prefix(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top() << endl;
    return 0;
}