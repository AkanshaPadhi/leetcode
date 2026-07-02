class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
       int n= grid.size();
       int m=grid[0].size();

       vector<vector<int>>bestHealth(n,vector<int>(m,-1));
       queue<vector<int>>que;
       int startHealth= health - grid[0][0];
       if(startHealth<1)
       return false;
       que.push({0,0,startHealth});
       bestHealth[0][0]=startHealth;
       vector<vector<int>>directions = {
        {-1,0},
        {1,0},
        {0,-1},
        {0,1}
       } ;

       while(!que.empty()){
        auto curr=que.front();
        que.pop();
        int row = curr[0];
        int col = curr[1];
        int currHealth = curr[2];

        if(row==n-1 && col== m-1)
        return true;
        for(auto &dir : directions){
            int newrow = row + dir[0];
            int newcol = col + dir[1];
            if(newrow < 0 || newrow >= n || newcol < 0 || newcol >= m)
            continue;
            
          int newHealth= currHealth - grid[newrow][newcol];
          if(newHealth < 1)
          continue;
            if(newHealth<=bestHealth[newrow][newcol])
            continue;
            bestHealth[newrow][newcol]=newHealth;
            que.push({newrow,newcol,newHealth});
        }
       }
       return false;
    }
};
