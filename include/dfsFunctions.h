#ifndef GRAPHS_DFS_BFS_DFSFUNCTIONS_H
#define GRAPHS_DFS_BFS_DFSFUNCTIONS_H

using namespace std;

inline void dfsRec(vector<vector<int>>&adjList, vector<bool> &visited, int source) {
    visited[source] = true;

    cout << source << ' ';

    for (int neighbor : adjList[source])
        if (!visited[neighbor])
            dfsRec(adjList, visited, neighbor);
}

inline void dfs(vector<vector<int>>&adjList, int source) {
    if (source < 0 || source >= adjList.size()) {
        cout << "Invalid source vertex" << '\n';
        return;
    }

    vector<bool> visited(adjList.size(), false);

    dfsRec(adjList, visited, source);
    cout << '\n';
}

#endif //GRAPHS_DFS_BFS_DFSFUNCTIONS_H