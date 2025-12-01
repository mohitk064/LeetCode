class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for(int i = 0; i<nums.size(); i++){
            int remains = target - nums[i];
            if(um.count(remains)){
                return{um[remains], i};
            }
            um[nums[i]] = i;
        }
        return {};
    }
};