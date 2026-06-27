#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        int mindiff=INT_MAX;
        for(int a=0;a<n-2;a++){
        int i=a+1;
        int j=n-1;
        while(i<j){
            int sum=nums[a]+nums[i]+nums[j];
            int diff=target-sum;
            if(abs(diff)<abs(mindiff)){
                mindiff=diff;
             ans=sum;
            }
            if((nums[i]+nums[j])>target-nums[a]){
                j--;
            }
            else{
                i++;
            }
        }

    }return ans;
    }
};
