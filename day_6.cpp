#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(vector<int>& arr) {
    vector<pair<int, int>> result;
    unordered_map<int, vector<int>> hashmap;
    int prefix_sum = 0;

    // prefix sum 0 initially at index -1
    hashmap[0].push_back(-1);

    for (int i = 0; i < arr.size(); i++) {
        prefix_sum += arr[i];

        // If prefix_sum seen before, subarrays exist
        if (hashmap.find(prefix_sum) != hashmap.end()) {
            for (int start : hashmap[prefix_sum]) {
                result.push_back({start + 1, i});
            }
        }
        // Store index for this prefix_sum
        hashmap[prefix_sum].push_back(i);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>> subarrays = findZeroSumSubarrays(arr);

    if (subarrays.empty()) {
        cout << "No subarray with zero sum found." << endl;
    } else {
        cout << "Subarrays with zero sum (start, end):" << endl;
        for (auto &p : subarrays) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
