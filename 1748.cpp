class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
               for(int j=0;j<i;j++){
                if(nums[j]==nums[i]){
                s.erase(nums[i]);
                break;
                }
                if(j==(i-1))
                s.insert(nums[i]);
               }
            }

        int sum=0;
        for(int x : s){
            sum+=x;
        }
        return sum;
    }
};
