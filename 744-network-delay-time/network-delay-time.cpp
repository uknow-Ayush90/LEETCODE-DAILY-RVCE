class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n + 1); 

        for (int i = 0; i < times.size(); i++) {
            int u = times[i][0];
            int v = times[i][1];
            int wt = times[i][2];
            adj[u].push_back({v, wt});
        }

       
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        vector<int> result(n + 1, INT_MAX);
        result[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for (auto it : adj[node]) {
                int nextNode = it.first;
                int nextDist = it.second;

                if (dist + nextDist < result[nextNode]) {
                    result[nextNode] = dist + nextDist;
                    pq.push({result[nextNode], nextNode});
                }
            }
        }

        int maxi = 0;
        for (int i = 1; i <= n; i++) {
            if (result[i] == INT_MAX) return -1;
            maxi = max(maxi, result[i]);
        }

        return maxi;
    }
};
