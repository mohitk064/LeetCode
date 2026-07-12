class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int longest = 0;
        int count = 0;
        int lastSmaller = INT_MIN;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] - 1 == lastSmaller){
                count++;
                lastSmaller = nums[i];
            }
            else if(nums[i] != lastSmaller){
                count = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
};