class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> shash(26, 0);
        int maxFreq = 0, start = 0, end = 0, res = 0;
        while(end < s.size()){
            shash[s[end++]-'A']++;
            maxFreq = max(maxFreq, shash[s[end-1]-'A']);
            while(end - start - maxFreq > k){
                shash[s[start++]-'A']--;
                maxFreq =* max_element(shash.begin(), shash.end());
            }
            res = max(res, end-start);
        }
        return res;
    }
};