class Solution {
public:
    long long sumAndMultiply(int n) {
        int i,z;
        long long x=0;
        long long y=0;
        long long sum=0;
        while(n!=0){
            z=n%10;
            if(z!=0){
                y=y*10 + z;
                sum=sum+z;
            }
            n=n/10;
        }
        while(y!=0){
         i=y%10;
         x=x*10 + i;
         y=y/10;
        }
        return x*sum;
    }
};
