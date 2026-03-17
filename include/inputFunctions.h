#ifndef GRAPHS_DFS_BFS_INPUT_FUNCTIONS_H
#define GRAPHS_DFS_BFS_INPUT_FUNCTIONS_H

#include <iostream>
#include <vector>

using namespace std;

extern vector<vector<int> > adjList;

extern int vertices;
extern int edges;

inline void inputAdjList() {
    cout << "Number of vertices: ";
    cin >> vertices;

    cout << "Number of edges: ";
    cin >> edges;

    adjList.clear();
    adjList.resize(vertices + 1);

    for (int i = 1; i <= vertices; ++i) {
        cout << "Adjacent vertices for vertex " << i << " | (enter 0 to stop): ";

        int neighbor;
        while (true) {
            cin >> neighbor;
            if (neighbor == 0) break;
            adjList[i].push_back(neighbor);
        }
    }

    /* for (int i = 1; i <= vertices; ++i) {
        if (!adjList.empty()) {
            for (int neighbor : adjList[i])
                cout << neighbor << ' ';
        }
        cout << "0\n";
    } */
}

inline void addEdge(int s, int t) {
    adjList[s].push_back(t);
}


#endif //GRAPHS_DFS_BFS_INPUT_FUNCTIONS_H
