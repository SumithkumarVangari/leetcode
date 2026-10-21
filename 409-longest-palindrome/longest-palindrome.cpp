class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
       for (char c : s) {
        mp[c]++;
    }

    int cnt = 0;
    bool check = false;

    for (auto it : mp) {
        if (it.second % 2 == 0) {
            cnt += it.second;
        }
        else {
            cnt += it.second - 1;
            check = true;
        }
    }

    if (check) cnt++;

    return cnt;
    }
};