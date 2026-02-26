class Solution {
public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int n = adj.size();
        queue<int> q;
        vector<int> ans;
        vector<bool> vis(n, false);

        q.push(0);
        vis[0] = true;   // mark visited when pushing

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (int child : adj[node]) {
                if (!vis[child]) {      // check visited
                    vis[child] = true;  // mark visited
                    q.push(child);
                }
            }
        }
        return ans;
    }
};