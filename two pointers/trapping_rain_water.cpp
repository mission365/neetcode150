//solution using suffix and prefix array(optimized approach with O(n) space complexity.
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n), rmax(n);

        lmax[0] = height[0];
        rmax[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            int val = max(height[i],lmax[i-1]);
            lmax[i] = val;
        }
        for(int i = n-2; i>=0; i--){
            int val = max(height[i],rmax[i+1]);
            rmax[i] = val;
        }

        int ans = 0;
        for(int i =0; i<n; i++){
            ans += min(lmax[i],rmax[i])-height[i];
        }
        return ans;
    }
};


//solution using two pointer(optimized approach with O(1) space complexity.
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int lmax = 0, rmax = 0;
        int l = 0, r = n-1;
        while(l<r){
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);
            if(lmax<rmax){
                ans += lmax-height[l];
                l++;
            }
            else{
                ans += rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};


