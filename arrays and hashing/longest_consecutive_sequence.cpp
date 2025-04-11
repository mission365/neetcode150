class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int ans = 1;

        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }
        
        for(auto it: st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int start = it;

                while(st.find(start+1) != st.end()){
                    start+=1;
                    cnt+=1;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
