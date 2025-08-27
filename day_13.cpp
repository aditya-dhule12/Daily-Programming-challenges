#include<iostream>
#include<string>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if(n == 0) return "";

    int start = 0, maxLen = 1;

    auto expand = [&](int left, int right) {
        while(left >= 0 && right < n && s[left] == s[right]) {
            int len = right - left + 1;
            if(len > maxLen) {
                start = left;
                maxLen = len;
            }
            left--;
            right++;
        }
    };

    for(int i = 0; i < n; i++) {
        expand(i, i);     
        expand(i, i + 1); 
    }

    return s.substr(start, maxLen);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Longest Palindromic Substring = " << longestPalindrome(s);
    return 0;
}
