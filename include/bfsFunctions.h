#ifndef GRAPHS_DFS_BFS_BFSFUNCTIONS_H
#define GRAPHS_DFS_BFS_BFSFUNCTIONS_H
#include <queue>
#include <vector>
#include <set>

using namespace std;

extern vector<vector<int>> adjList;
extern int vertices;

inline vector<int> bfs(int start) {
    vector<bool> visited(vertices + 1, false);
    queue<int> q;
    vector<int> result;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        result.push_back(node);

        for (int neighbor: adjList[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return result;
}


#endif //GRAPHS_DFS_BFS_BFSFUNCTIONS_H