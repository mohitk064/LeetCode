class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int actualCount = 1;
        int count = 1;
        sort(nums.begin(), nums.end());
        if(nums.size() == 0){
            return 0;
        }
        else{
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            else if(nums[i+1] - nums[i] == 1){
                count++;
            }
            else{
                actualCount = max(count,actualCount);
                count = 1;
            }
        }
        return max(count, actualCount);
        }
    }
};