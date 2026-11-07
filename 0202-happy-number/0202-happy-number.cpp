class Solution {
public:
    int getNext(int n){
        int res = 0;
        while(n > 0){
            int d = n % 10;
            n = n / 10;
            res += d * d;
        }
        return res;
    }
    bool isHappy(int n) {
        set<int> seen;
        while(n != 1 && seen.find(n) == seen.end()){
            seen.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};