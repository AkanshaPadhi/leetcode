class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> max(n);
        vector<int> min(n);
       int maxi=nums[0];
       int mini=nums[nums.size()-1];

       for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi)
        maxi=nums[i];
        max[i]=maxi;
       }

       for(int j=nums.size()-1;j>=0;j--){
        if(nums[j]<mini)
        mini=nums[j];
        min[j]=mini;
       }

    for(int a=0;a<nums.size();a++){
    if((max[a]-min[a])<=k)
    return a;
    }
    
    return -1;
    }
};
