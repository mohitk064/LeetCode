class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int count = 0;
        int temp = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] - nums[i-1] == 1){
                temp++;
            }
            else if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                count = max(count, temp);
                temp = 0;
            }
        }
        count = max(count, temp);
        return count+1;
    }
};