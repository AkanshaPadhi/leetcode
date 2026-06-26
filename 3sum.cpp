#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
           int a=i+1;
           int b=n-1;
           while(a<b){
            if(nums[a]+nums[b]==-nums[i]){
                ans.push_back({nums[i],nums[a],nums[b]});
                a++;
                while (nums[a]==nums[a-1] && a<b){
                    a++;
                }
                b--;
                while (nums[b]==nums[b+1] && a<b){
                    b--;
                }
            }
            else if(nums[a]+nums[b]>-nums[i]){
               b--;
            }
            else {
                a++;
            }
           } 
        } return ans;        
    }
};
