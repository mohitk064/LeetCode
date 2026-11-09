class Solution {
public:
    bool canConstruct(string ransome, string magazine) {
        int count = 0;
        map<char, int> mp;
        for(int i = 0; i<magazine.length(); i++){
            mp[magazine[i]]++;
        }
        for(int i = 0; i<ransome.length(); i++){
            if(mp.find(ransome[i]) != mp.end() && mp[ransome[i]]>0){
                count++;
                mp[ransome[i]]--;
            }
        }
        if(count == ransome.length()){
            return true;
        }
        return false;
    }
};