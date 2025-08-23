/**
 * Asen and Boyan are playing the following game. They choose two different positive integers K and L, and
start the game with a tower of N coins. Asen always plays first, Boyan – second, after that – Asen again, then
Boyan, and so on. The boy in turn can take 1, K or L coins from the tower. The winner is the boy, who takes the
last coin (or coins). After a long, long playing, Asen realizes that there are cases in which he could win, no
matter how Boyan plays. And in all other cases Boyan being careful can win, no matter how Asen plays.
 
 */
#include <iostream>
#include <vector>
using namespace std;

int k, l;
vector<int> dp;

bool isWinning(int n) {
    if (n < 0) return false; // Invalid move
    if (n == 0) return false; // No move possible → lose

    if (dp[n] != -1) return dp[n];

    // Check if any move leads to a losing state
    if (!isWinning(n - 1) || 
        (n >= k && !isWinning(n - k)) || 
        (n >= l && !isWinning(n - l))) {
        return dp[n] = 1; // Winning
    }
     
    return dp[n] = 0; // Losing
}

int main() {
    int m;
    cin >> k >> l >> m;
    
    vector<int> queries(m);
    int max_n = 0;
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
        max_n = max(max_n, queries[i]);
    }

    dp.assign(max_n + 1, -1);

    for (int n : queries) {
        cout << (isWinning(n) ? 'A' : 'B');
    }

    cout << endl;
    return 0;
}

