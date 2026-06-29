class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int, int> st;
    for(int x : nums){
        st[x]++;
    }
    for(auto t : st){
        if(t.second > nums.size()/2){
            return t.first;
        }
    }
    return -1;            
   }
};