#include <bits/stdc++.h>
using namespace std;

void generateSubsets(int idx, string &s, string &current, vector<string> &result) {
    result.push_back(current);

    for (int i = idx; i < s.size(); i++) {

        // Skip duplicates at the same level
        if (i > idx && s[i] == s[i - 1])
            continue;

        current.push_back(s[i]);
        generateSubsets(i + 1, s, current, result);
        current.pop_back(); // backtrack
    }
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    sort(s.begin(), s.end()); // IMPORTANT

    vector<string> result;
    string current = "";

    generateSubsets(0, s, current, result);

    for (auto &x : result)
        cout << x << endl;

    cout << "No. of unique strings: " << result.size();
    return 0;
}
