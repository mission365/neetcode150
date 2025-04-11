class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<int> st;

        for(auto it: nums){
            st.insert(it);
        }

        if(nums.size()==st.size()) return false;
        else return true;
    }
};
