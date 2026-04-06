#ifndef GRAPHS_DFS_BFS_UTILITYFUNCTIONS_H
#define GRAPHS_DFS_BFS_UTILITYFUNCTIONS_H

#include <vector>
#include <iostream>

using namespace std;

inline void printResult(const string& label, const vector<int>&result, int source) {
    cout << label << " from "<< source << ": ";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << " -> ";
    }
    cout << '\n';
}

#endif //GRAPHS_DFS_BFS_UTILITYFUNCTIONS_H