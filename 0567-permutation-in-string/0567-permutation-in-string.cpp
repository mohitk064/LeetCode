class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if(m<n) return false;
        map<char, int> m1;
        for(auto x:s1) m1[x]++;

        map<char, int> m2;
        for(int i = 0; i<n; i++){
            m2[s2[i]]++;
        }
        int i = 0, j = n-1;
        while(j<m){
            if(m1 == m2) return true;
            m2[s2[i]]--;
            if(m2[s2[i]]==0) m2.erase(s2[i]);
            i++;
            j++;
            m2[s2[j]]++;
        }
        return false;
    }
};