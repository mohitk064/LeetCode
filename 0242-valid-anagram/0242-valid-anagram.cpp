class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1, mp2;
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i<s.length(); i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(auto x : mp1){
            if(mp2.find(x.first) == mp2.end()){
                return false;
            }
            else if(mp2.find(x.first) != mp2.end() && mp2[x.first] != x.second){
                return false;
            }
        }
        return true;
    }
};