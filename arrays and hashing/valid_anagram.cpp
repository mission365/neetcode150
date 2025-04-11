class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<int,int> smp;
        unordered_map<int,int> tmp;

        for(int i=0; i<s.length(); i++){
            smp[s[i]]++;
            tmp[t[i]]++;
        }
        
        return smp == tmp;
    }
};
