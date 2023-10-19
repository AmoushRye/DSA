#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
using namespace std;
template<typename T>
class graph {
public:
    unordered_map<T, list<T>> adj;
    void addEdge(T x, T y) {
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    void printgraph() {
        for (auto i : adj) {
            cout << i.first << "--->";
            for (auto j : i.second) {
                cout << j << ",";
            }
            cout << endl;
        }
    }
    void bfsTraversal(T start) {
        queue<T> q;
        unordered_map<T, bool> visited;
        visited[start] = true;
        q.push(start);
        while (!q.empty()) {
            T s = q.front();
            cout << s << " ";
            q.pop();
            for (auto i : adj[s]) {
                if (!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
};

int main() {
    graph<int> g;
    int n;
    cout << "Enter the number of nodes:";
    cin >> n;
    int m;
    cout << "Enter the number of edges:";
    cin >> m;
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        g.addEdge(a, b);
    }
    g.printgraph();
    int start_node;
    cout << "Enter the starting node for BFS traversal: ";
    cin >> start_node;
    cout << "BFS Traversal starting from node " << start_node << ": ";
    g.bfsTraversal(start_node);
    return 0;
}
