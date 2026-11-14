class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        vector<string> sorted_strs;
        for(int i = 0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            sorted_strs.push_back(temp);
        }
        for(int i = 0; i<strs.size(); i++){
            mp[sorted_strs[i]].push_back(strs[i]);
        }
        for(auto x : mp){
            result.push_back(x.second);
        }
        return result;
    }
};