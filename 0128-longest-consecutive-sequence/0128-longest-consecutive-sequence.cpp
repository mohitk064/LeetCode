class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
       sort(nums.begin(), nums.end());
       int count = 0;
       int temp = 0;
       for(int i = 0; i<nums.size()-1; i++){
        
        if(nums[i]+1 == nums[i+1]){
            temp++;
        }
        else if(nums[i] == nums[i+1]){
            continue;
        }
        else{
            count = max(temp, count);
            temp=0;
        }
       }
       count = max(count, temp);

       return count+1;
    }
};