class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> visited;

    int vertices;
    int edges;

    void dfs(int node)
    {
        visited[node] = true;

        vertices++;                         // Count this vertex
        edges += adj[node].size();          // Count all incident edges

        for(int neighbour : adj[node])
        {
            if(!visited[neighbour])
            {
                dfs(neighbour);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edgesList)
    {
        // Build adjacency list
        adj.resize(n);
        visited.assign(n, false);

        for(auto &edge : edgesList)
        {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int answer = 0;

        // Traverse every node
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                vertices = 0;
                edges = 0;

                dfs(i);

                edges /= 2;   // Every edge counted twice

                if(edges == vertices * (vertices - 1) / 2)
                {
                    answer++;
                }
            }
        }

        return answer;
    }
};
