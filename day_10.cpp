#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strs(n);
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    map<string, vector<string>> mp;

    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }

    for (auto it : mp) {
        cout << "[ ";
        for (string w : it.second) {
            cout << w << " ";
        }
        cout << "]\n";
    }

    return 0;
}
