#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<char> items(n);
    for (int i = 0; i < n; ++i) cin >> items[i];
    string buf; getline(cin, buf); // skip newline
    getline(cin, buf); // fixed positions
    vector<int> fixed;
    stringstream ss(buf);
    int x; while (ss >> x) fixed.push_back(x - 1); // 0-based

    // Count items per owner
    map<char, int> cnt;
    for (char c : items) cnt[c]++;
    vector<char> types = {'A', 'B', 'C'};
    int answer = INT_MAX;
    bool possible = false;
    sort(types.begin(), types.end());
    do {
        int start[3];
        start[0] = 0;
        start[1] = cnt[types[0]];
        start[2] = start[1] + cnt[types[1]];
        int end[3];
        end[0] = start[1] - 1;
        end[1] = start[2] - 1;
        end[2] = n - 1;

        // Validate all fixed positions: fixed spot must be owned by the corresponding owner after rearranging
        bool ok = true;
        for (int pos : fixed) {
            int block = -1;
            for (int i = 0; i < 3; ++i) {
                if (start[i] <= pos && pos <= end[i]) block = i;
            }
            if (block == -1 || items[pos] != types[block]) ok = false;
        }
        if (!ok) continue;
        possible = true;
        int moves = 0;
        // For each block, count non-owner items (excluding fixed positions that are already correct)
        vector<bool> is_fixed(n, false);
        for (int pos : fixed) is_fixed[pos] = true;
        for (int i = 0; i < 3; ++i) {
            for (int j = start[i]; j <= end[i]; ++j) {
                if (!is_fixed[j] && items[j] != types[i]) moves++;
            }
        }
        answer = min(answer, moves);
    } while (next_permutation(types.begin(), types.end()));
    if (possible) cout << answer << endl;
    else cout << "Impossible" << endl;
    return 0;
}
