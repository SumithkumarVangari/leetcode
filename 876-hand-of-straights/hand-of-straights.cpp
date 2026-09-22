class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size(),k=n;
        if(n%groupSize!=0) return false;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[hand[i]]++;
        }
        while(k>0)
        {
            int m=*min_element(hand.begin(),hand.end());
            int cnt=0;
            while(cnt<groupSize)
            {
                if(mp.find(m)!=mp.end())
                {
                    mp[m]--;
                    if(mp[m]==0) mp.erase(m);
                    hand.erase(find(hand.begin(), hand.end(),m));
                    k--;
                    cnt++;
                    m++;
                }
                else return false;
            }
        }
        return true;
    }
};