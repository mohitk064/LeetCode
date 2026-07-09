class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res  = 0;
        sort(nums.begin(), nums.end());
        if(nums[nums.size()-1]<nums.size()){
            res = nums.size();
        }
        else{
            for(int i = 0; i<nums.size()-1; i++){
                if(nums[i+1] - nums[i] != 1){
                    res = nums[i] + 1;
                }
            }
        }
        return res;
    }
};