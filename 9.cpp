class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
         long long p=0;
         int r;
         int num=x;
        while(num>0){
          r=num%10;
          num/=10;  
          p=(p*10)+r;
        }
        if(p==x)
        return true;
        else
         return false;
    }
};
