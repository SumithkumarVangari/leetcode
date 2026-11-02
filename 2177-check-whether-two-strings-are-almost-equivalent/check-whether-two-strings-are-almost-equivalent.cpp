class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
          unordered_map<char,int> mp, st;

        for(int i = 0; i < word1.size(); i++)
            mp[word1[i]]++;

        for(int i = 0; i < word2.size(); i++)
            st[word2[i]]++;

        for(auto it : mp)
        {
            int a = it.second;
            int b = st[it.first];

            if(abs(a-b) > 3)
                return false;
        }

        for(auto it : st)
        {
            int a = it.second;
            int b = mp[it.first];

            if(abs(a-b) > 3)
                return false;
        }

        return true;
    }
};