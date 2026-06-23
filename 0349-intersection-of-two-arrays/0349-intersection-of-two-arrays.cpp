class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(begin(nums1), end(nums1));
        unordered_set<int> st2;

        for(int num : nums2){
            if(st1.find(num) != st1.end()){
                st2.insert(num);
            }
        }
        vector<int> ans(begin(st2), end(st2));
        return ans;
    }
};