class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_map<int, int> mp2;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto x : mp){
            mp2[x.second]++;
        }
        for(auto x : mp2){
            if(x.second > 1){
                return false;
            }
        }
        return true;

    }
};