class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();

        if(t.length() > s.length()){
            return "";
        }
        unordered_map<char, int> mp;
        for(char &ch : t){
            mp[ch]++;
        }
        int reqcount = t.length();
        int i = 0, j = 0;
        int minWinSize = INT_MAX;
        int start_i = 0;
        while(j < n){
            char ch = s[j];
            if(mp[ch] > 0){
                reqcount--;
            }
            mp[ch]--;
            while(reqcount == 0){
                int currWinSize = j-i+1;

                if(minWinSize > currWinSize){
                    minWinSize = currWinSize;
                    start_i = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] > 0){
                    reqcount++;
                }
                i++;
            }
            j++;
        }
        return minWinSize == INT_MAX ? "" : s.substr(start_i, minWinSize);
    }
};