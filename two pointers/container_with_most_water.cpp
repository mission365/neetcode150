class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n-1;
        int ans = 0;
        while(l<r){
            if(heights[l]<=heights[r]){
                ans = max(ans,heights[l] * (r-l));
                l++;
            }
            if(heights[l]>heights[r]){
                ans = max(ans,heights[r] * (r-l));
                r--;
            }
        }
        return ans;
    }
};
