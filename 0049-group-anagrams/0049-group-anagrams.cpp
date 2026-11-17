class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<string> sorted;
        vector<vector<string>> result;
        for(int i = 0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            sorted.push_back(temp);
        }
        for(int i = 0; i<sorted.size(); i++){
            mp[sorted[i]].push_back(strs[i]);
        }
        for(auto x : mp){
            result.push_back(x.second);
        }
        return result;

    }
};