class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        vector<int> jumps(n,0);
        
        st.push(0);
        int curr,now;
        while(!st.empty()){
        now=st.top();
        curr=st.top();
        st.pop();
        for(int i=1;i<=nums[now];i++){
            if(curr<n-1)
            curr++;
            else break;
           if(jumps[curr]==0){
           st.push(curr);
           jumps[curr]=jumps[now]+1;
           }
           else if(jumps[curr]>1+jumps[now]){
           jumps[curr]=1+jumps[now];
           st.push(curr);
           }
           else continue;
        }
        }
        return jumps[n-1];
    }
};
