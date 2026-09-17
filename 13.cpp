class Solution {
public:
    int romanToInt(string s) {
        int num = 0;

        for(int i = s.length() - 1; i >= 0; i--) {

            if(i != s.length() - 1) {

                if((s[i] == 'I' && s[i+1] == 'V') || 
                   (s[i] == 'I' && s[i+1] == 'X')) {
                    num = num - 1;
                    continue;
                }

                if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) {
                    num = num - 10;
                    continue;
                }

                if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) {
                    num = num - 100;
                    continue;
                }
            }

            if(s[i] == 'I')
                num += 1;

            if(s[i] == 'V')
                num += 5;

            if(s[i] == 'X')
                num += 10;

            if(s[i] == 'L')
                num += 50;

            if(s[i] == 'C')
                num += 100;

            if(s[i] == 'D')
                num += 500;

            if(s[i] == 'M')
                num += 1000;
        }

        return num;
    }
};
