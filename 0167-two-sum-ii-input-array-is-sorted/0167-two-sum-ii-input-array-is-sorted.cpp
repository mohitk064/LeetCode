class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int curr = numbers[i] + numbers[j];
            if(curr > target){
                j--;
            }
            else if(curr < target){
                i++;
            }
            else{
                return {i+1, j+1};
            }
        }
        return {};
    }
};