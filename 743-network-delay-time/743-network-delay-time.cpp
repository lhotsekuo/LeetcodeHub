class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
        // build graph
        constexpr int MAX_TIME = 100 * 100;
        vector<int> dist(n, MAX_TIME);
        
        dist[k - 1] = 0;
        // Bellman-Ford
        for (int i = 0; i < n; ++i) 
        {
            for (const auto& edge : times) 
            {
                int u = edge[0] - 1;
                int v = edge[1] - 1;
                int w = edge[2];
                dist[v] = min(dist[v], dist[u] + w);
            }
        }
        
        int max_dist = *max_element(dist.begin(), dist.end());
        return max_dist == MAX_TIME ? -1 : max_dist;
         
    }
};