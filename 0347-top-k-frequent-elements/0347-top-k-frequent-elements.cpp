class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> freq;
        vector<int> result;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            freq.push_back({x.second, x.first});
        }
        sort(freq.begin(), freq.end(), greater<pair<int ,int>>());
        for(int i = 0; i<k; i++){
            result.push_back(freq[i].second);
        }
        return result;
    }
};