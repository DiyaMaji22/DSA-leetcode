class Solution {
public:
    bool isPossible(int N, int P, vector<pair<int, int>>& prerequisites) {
        
        vector<vector<int>> adj(N);
        vector<int> indegree(N, 0);
        
        // Build graph
        for (int i = 0; i < P; i++) {
            int a = prerequisites[i].first;
            int b = prerequisites[i].second;
            
            adj[b].push_back(a);   // b → a
            indegree[a]++;
        }
        
        queue<int> q;
        
        // Push all nodes with indegree 0
        for (int i = 0; i < N; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        
        int count = 0;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            count++;
            
            for (int neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
        
        // If all tasks processed → no cycle
        return (count == N);
    }
};