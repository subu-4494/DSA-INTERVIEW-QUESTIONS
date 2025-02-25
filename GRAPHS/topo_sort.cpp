//Given a Directed Acyclic Graph (DAG) with V vertices and E edges, perform a topological sort of the graph. A topological sort of a DAG is a linear ordering of its vertices such that for every directed edge (u, v), vertex u appears before v in the ordering.

// Constraints
// The graph has no cycles.
// Multiple valid topological orders may exist.




#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int node, vector<int> adj[], vector<bool> &visited, stack<int> &st) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, st);
            }
        }
        st.push(node);
    }

    vector<int> topoSort(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        stack<int> st;
        vector<int> result;

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, st);
            }
        }

        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};

// Driver code
int main() {
    int V = 6;
    vector<int> adj[V];
    adj[5].push_back(0);
    adj[5].push_back(2);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    Solution obj;
    vector<int> topo = obj.topoSort(V, adj);

    cout << "Topological Order: ";
    for (int node : topo) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
