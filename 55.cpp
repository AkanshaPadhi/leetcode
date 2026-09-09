class Solution {

public:

bool canJump(vector<int>& nums) {
    if(nums.size()==1)
    return true;
    vector<bool>visited(nums.size(),false);

    stack<int> st;

    st.push(nums.size()-1);

    int curr;

  while(!st.empty()){

    curr=st.top();

    st.pop();

    for(int j=curr-1;j>=0;j--){
        if(visited[j])
        continue;
        
      if(nums[j]>=(curr-j)){

      st.push(j);
    (visited[j]=true);
        
      if(j==0)

      return true;

      }      

  }  

  }

  return false;

}

};
