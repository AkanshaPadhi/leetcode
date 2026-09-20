class Solution {
public:
    int reverseDegree(string s) {
     int sum=0;
       for(int i=0;i<s.length();i++){
          int a=s[i];
          sum+=(a-(71+((a-97)*2)))*(i+1);            
       }
       return sum;
    }
};
