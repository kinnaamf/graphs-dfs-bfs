#include <iostream>
#include <vector>
#include "../include/inputFunctions.h"
#include "../include/dfsFunctions.h"
#include "../include/utilityFunctions.h"
#include "../include/bfsFunctions.h"

using namespace std;

vector<vector<int> > adjList;

int vertices = 0;
int edges = 0;

int main() {
    int option;
    cout << "Enter option: \n1. Graph\n2. Tree\nChoice:";
    cin >> option;

    switch (option) {
        case 1: {
            inputAdjList();

            int source;
            cout << "Enter source vertex for algorithms: ";
            cin >> source;

            if (source < 1 || source > vertices) {
                cout << "Invalid source vertex" << '\n';
                return 1;
            }
            vector<int> bfsResult = bfs(source);
            printResult("BFS Graph traversal", bfsResult, source);

            vector<int> dfsResult = dfs(source);
            printResult("DFS Graph traversal", dfsResult, source);
            break;
        }

        case 2: {
            inputTreeAdjList();

            int source;
            cout << "Enter source vertex for algorithms: ";
            cin >> source;

            if (source < 1 || source > vertices) {
                cout << "Invalid source vertex" << '\n';
                return 1;
            }
            vector<int> bfsResult = bfs(source);
            printResult("BFS Tree traversal", bfsResult, source);

            vector<int> dfsResult = dfs(source);
            printResult("DFS Tree traversal", dfsResult, source);
            break;
        }

        default: cout << "Invalid option\n";
            return 1;
    }

    return 0;
}
