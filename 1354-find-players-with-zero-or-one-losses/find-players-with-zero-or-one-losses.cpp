class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        vector<int> wine;
        vector<int> losee;
        unordered_map<int,int> win;
        unordered_map<int,int> lose;
        int n=matches.size();
        for(int i=0;i<n;i++)
        {
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
        }
        for(auto it : win)
        {
            if(lose.find(it.first)==lose.end()) wine.push_back(it.first);
        }
        for(auto it : lose)
        {
            if(it.second==1) losee.push_back(it.first);
        }
        sort(wine.begin(),wine.end());
        sort(losee.begin(),losee.end());
       ans.push_back(wine);
       ans.push_back(losee);
        return ans;
    }
};