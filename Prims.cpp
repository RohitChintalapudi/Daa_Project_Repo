#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int cost[n][n];
    cout << "Enter adjacency matrix (0 for no edge):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
            if (cost[i][j] == 0)
                cost[i][j] = 9999;
        }
    }

    int visited[n] = {0};
    visited[0] = 1;

    int edges = 0;
    int minCost = 0;

    cout << "\n--- PRIM'S MINIMUM SPANNING TREE ---\n";

    while (edges < n - 1) {
        int a = -1, b = -1, min = 9999;

        for (int i = 0; i < n; i++) {
            if (visited[i] == 1) {
                for (int j = 0; j < n; j++) {
                    if (visited[j] == 0 && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        cout << "Edge: " << a << " -> " << b << "  | Cost = " << min << "\n";

        minCost += min;
        visited[b] = 1;
        edges++;
    }

    cout << "\nTotal Minimum Cost (MST) = " << minCost << endl;

    return 0;
}
