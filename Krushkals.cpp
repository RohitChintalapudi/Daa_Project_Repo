#include <iostream>
using namespace std;

int findParent(int parent[], int x) {
    if (parent[x] == x) return x;
    return parent[x] = findParent(parent, parent[x]);
}

int main() {
    int n, e;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;

    int U[50], V[50], W[50];

    cout << "Enter edges (u v w):\n";
    for (int i = 0; i < e; i++) {
        cin >> U[i] >> V[i] >> W[i];
    }

    for (int i = 0; i < e - 1; i++) {
        for (int j = 0; j < e - i - 1; j++) {
            if (W[j] > W[j + 1]) {
                swap(W[j], W[j + 1]);
                swap(U[j], U[j + 1]);
                swap(V[j], V[j + 1]);
            }
        }
    }

    int parent[20], rank[20] = {0};

    for (int i = 0; i < n; i++)
        parent[i] = i;

    int minCost = 0;

    cout << "\n--- KRUSKAL'S MINIMUM SPANNING TREE ---\n";

    for (int i = 0; i < e; i++) {
        int pu = findParent(parent, U[i]);
        int pv = findParent(parent, V[i]);

        if (pu != pv) {
            cout << "Edge: " << U[i] << " -> " << V[i] << "  | Cost = " << W[i] << "\n";

            minCost += W[i];

            // Union by rank
            if (rank[pu] < rank[pv])
                parent[pu] = pv;
            else if (rank[pu] > rank[pv])
                parent[pv] = pu;
            else {
                parent[pv] = pu;
                rank[pu]++;
            }
        }
    }

    cout << "\nTotal Minimum Cost (MST) = " << minCost << endl;

    return 0;
}
