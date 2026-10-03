class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<int>ss;
        set<int>mm;
        int n=nums.size();
        for(auto x: nums)
        {
            if(ss.find(x-k)!=ss.end()) mm.insert(x-k);
            if(ss.find(x+k)!=ss.end()) mm.insert(x);
            ss.insert(x);
        }
        return mm.size();
    }
};