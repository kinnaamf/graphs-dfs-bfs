#include <iostream>
#include <vector>
#include "../include/inputFunctions.h"
#include "../include/dfsFunctions.h"

using namespace std;

vector<vector<int>> adjList;

int vertices = 0;
int edges = 0;

int main() {

    inputAdjList();

    int source;
    cout << "Enter source vertex for DFS: ";
    cin >> source;

    if (source < 1 || source > vertices) {
        cout << "Invalid source vertex" << '\n';
        return 1;
    }

    cout << "DFS from source: " << source << endl;
    dfs(adjList, source);

    return 0;
}