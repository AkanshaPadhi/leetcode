class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> stable(n);
        int max,min;
        for(int i=0;i<n;i++){
            max=nums[i];
            min=nums[i];
            for(int j=0;j<n;j++){
                if(j<=i){
                if(nums[j]>max)
                max=nums[j];
                }
                if(j>=i){
                if(nums[j]<min)
                min=nums[j];
                }
            }
            if((max-min)<=k)
            stable[i]=1;
            else stable[i]=0;
        }
        for(int a=0;a<stable.size();a++){
            if(stable[a]==1){
                return a;
            }
            if(a==stable.size()-1)
            return -1;
        }
        return -1;
    }
};
