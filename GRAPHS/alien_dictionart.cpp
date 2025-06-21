
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<char, vector<char>> graph;
    unordered_set<char> visited;
    unordered_set<char> onPath;
    stack<char> topoStack;
    bool hasCycle = false;

    // DFS to detect cycle and perform topological sort
    void dfs(char node) {
        if (onPath.count(node)) {
            hasCycle = true;
            return;
        }
        if (visited.count(node)) return;

        visited.insert(node);
        onPath.insert(node);

        for (char neighbor : graph[node]) {
            dfs(neighbor);
            if (hasCycle) return;
        }

        onPath.erase(node);
        topoStack.push(node);
    }

    // Topological sort of the graph
    string topoSort(unordered_set<char>& allChars) {
        visited.clear();
        onPath.clear();
        while (!topoStack.empty()) topoStack.pop();
        hasCycle = false;

        for (char ch : allChars) {
            if (!visited.count(ch)) {
                dfs(ch);
                if (hasCycle) return "";
            }
        }

        string result;
        while (!topoStack.empty()) {
            result += topoStack.top();
            topoStack.pop();
        }
        return result;
    }

    // Main function
    string findOrder(vector<string>& words) {
        unordered_map<char, vector<char>> adj;
        unordered_set<char> allChars;

        // Collect all unique characters
        for (const string& word : words) {
            for (char ch : word) {
                allChars.insert(ch);
            }
        }

        // Build graph (add edges between first differing characters)
        for (int i = 0; i < words.size() - 1; ++i) {
            string& w1 = words[i];
            string& w2 = words[i + 1];
            int j = 0;

            while (j < w1.size() && j < w2.size() && w1[j] == w2[j]) {
                ++j;
            }

            if (j < w1.size() && j < w2.size()) {
                adj[w1[j]].push_back(w2[j]);
            }
            else if (j == w2.size() && w1.size() > w2.size()) {
                return "";  // Invalid: prefix rule broken
            }
        }

        graph = adj;
        return topoSort(allChars);
    }
};
