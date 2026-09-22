class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),l=0,h=n-1,maxi=0;
        while(l<h)
        {
            maxi=max(maxi,(h-l)*min(height[h],height[l]));
            if(height[h]>height[l]) l++;
            else h--;
        }
        return maxi;
    }
};