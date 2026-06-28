#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
       long long sum1,sum2;
       long long total;
       int a,b,i,j;
       vector<vector<int>> ans;
    for(int i=0;i<n-2;i++){
        if(i>0 && nums[i]==nums[i-1]){
          continue;
        }
    for(int j=i+1;j<n-1;j++){
        if(j>i+1 && nums[j]==nums[j-1]){
            continue;
        }
        sum1=nums[i]+nums[j];
        int a=j+1;
        int  b=n-1;
         while(a<b){
               sum2=nums[a]+nums[b];
               total=sum1 + sum2;
        if(total==target){
           ans.push_back({nums[i],nums[j],nums[a],nums[b]});
              a++;
              b--;
              while(a<b && nums[a]==nums[a-1]){
        a++;
        }
        while(a<b && nums[b]==nums[b+1]){
            b--;
        }
        }  
        if(sum2>(target-sum1)){
            b--;
        }
        else if(sum2<(target-sum1)){
            a++;
        }
        }
    }
}
  return ans;      
    }
};
