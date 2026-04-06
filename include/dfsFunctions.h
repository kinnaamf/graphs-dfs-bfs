#ifndef GRAPHS_DFS_BFS_DFSFUNCTIONS_H
#define GRAPHS_DFS_BFS_DFSFUNCTIONS_H

using namespace std;

extern vector<vector<int>> adjList;
extern int vertices;

inline void dfsRec(vector<bool> &visited, int source, vector<int>& result) {
    visited[source] = true;
    result.push_back(source);
    // cout << source << ' ';

    for (int neighbor : adjList[source])
        if (!visited[neighbor])
            dfsRec(visited, neighbor, result);
}

inline vector<int> dfs(int source) {
    if (source < 0 || source >= adjList.size()) {
        cout << "Invalid source vertex" << '\n';
        return adjList.front();
    }

    vector<bool> visited(vertices + 1, false);
    vector<int> result;

    dfsRec(visited, source, result);

    return result;
}

#endif //GRAPHS_DFS_BFS_DFSFUNCTIONS_H