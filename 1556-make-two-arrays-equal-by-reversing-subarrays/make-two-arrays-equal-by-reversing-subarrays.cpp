class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
    sort(target.begin(),target.end());
    sort(arr.begin(),arr.end());
    int i=0,j=0,n=arr.size();
    while(i<n)
    {
        if(target[i]!=arr[j]) return false;
        i++;
        j++;
    }
    return true;
    }
};