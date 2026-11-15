class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        int maximum = 0;
        for(auto x : st){
            if(st.find(x-1) == st.end()){
            int current = x;
            int length = 1;
            while(st.find(current + 1) != st.end()){
                current++;
                length++;
            }
            maximum = max(maximum, length);
            }
            
        }
        return maximum;
    }
};