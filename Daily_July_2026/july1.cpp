class Solution {
public:
    int n;
    vector<vector<int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};

    bool check(vector<vector<int>>& distNearestThief, int sf){
        if(distNearestThief[0][0] < sf)
            return false;

        queue<pair<int,int>> que;
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        que.push({0,0});
        visited[0][0] = true;

        while(!que.empty()){
            auto [curr_i, curr_j] = que.front();
            que.pop();

            if(curr_i == n-1 && curr_j == n-1)
                return true;

            for(auto &dir : directions){
                int new_i = curr_i + dir[0];
                int new_j = curr_j + dir[1];

                if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < n &&
                   !visited[new_i][new_j] &&
                   distNearestThief[new_i][new_j] >= sf)
                {
                    visited[new_i][new_j] = true;
                    que.push({new_i, new_j});
                }
            }
        }
        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        n = grid.size();
        vector<vector<int>> distNearestThief(n, vector<int>(n, -1));
        queue<pair<int,int>> que;

        // Multi-source BFS from all thieves
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    que.push({i,j});
                }
            }
        }

        int level = 0;
        while(!que.empty()){
            int size = que.size();
            while(size--){
                auto [curr_i, curr_j] = que.front();
                que.pop();

                if(distNearestThief[curr_i][curr_j] != -1)
                    continue;

                distNearestThief[curr_i][curr_j] = level;

                for(auto &dir : directions){
                    int new_i = curr_i + dir[0];
                    int new_j = curr_j + dir[1];

                    if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < n &&
                       distNearestThief[new_i][new_j] == -1)
                    {
                        que.push({new_i,new_j});
                    }
                }
            }
            level++;
        }

        // Binary search on safeness factor
        int l = 0, r = 2*n, ans = 0;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(check(distNearestThief, mid)){
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};
