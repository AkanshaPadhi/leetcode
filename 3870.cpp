class Solution {
public:
    int countCommas(int n) {
        if(n<1000)
            return 0;
        if(n<=100000 && n>999)
        return n-999;
        return 0;
    }
};
