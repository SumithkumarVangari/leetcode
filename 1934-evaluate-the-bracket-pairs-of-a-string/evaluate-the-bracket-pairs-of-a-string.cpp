class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;

        for (auto x : knowledge) {
            mp[x[0]] = x[1];
        }

        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++) {

            if (s[i] == '(') {
                int k = i + 1;
                string mm = "";

                while (k < n && s[k] != ')') {
                    mm += s[k];
                    k++;
                }

                if (mp.find(mm) != mp.end())
                    ans += mp[mm];
                else
                    ans += "?";

                i = k;  // skip everything up to ')'
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};