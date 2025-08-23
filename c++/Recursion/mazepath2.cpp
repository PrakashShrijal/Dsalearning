#include <bits/stdc++.h>
using namespace std;
void maze(int sr, int sc, int er, int ec, string str)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        cout << str << endl;
        return;
    }

    maze(sr, sc + 1, er, ec, str + 'R');
    maze(sr + 1, sc, er, ec, str + 'D');
}
int main()
{
    int er, ec;
    cout << "Enetr the ending row and column :";
    cin >> er >> ec;
    maze(1, 1, er, ec, "");
    return 0;
}