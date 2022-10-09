#include <iostream>
#include <vector>

using namespace std;

class DisjointSet {
    vector<int> parent;
    vector<int> rank;
    public:
        DisjointSet(int n) {
            parent.resize(n+1);
            rank.resize(n+1);

            for (int i=0; i<=n; i++) {
                makeSet(i);
            }
        }
        void makeSet(int a) {
            parent[a] = a;
            rank[a] = 1;
        }
        void unionSet(int a, int b) {
            int ra = find(a);
            int rb = find(b);

            if (ra == rb) return;

            if (rank[ra] > rank[rb]) {
                parent[rb] = ra;
            } else if (rank[ra] < rank[rb]) {
                parent[ra] = rb;
            } else {
                parent[rb] = ra;
                rank[ra]++;
            }
        }
        int find(int a) {
            if (parent[a] != a) {
                parent[a] = find(parent[a]);
            }
            return parent[a];
        }
        bool connected(int a, int b) {
            return (find(a) == find(b));
        }
};

int main() {

    int n;
    cout << "Enter no. of vertices: ";
    cin >> n;
    DisjointSet* set = new DisjointSet(n);

    // cout <<  "Enter no. of connections: ";
    // cin >> n;

    while (n--) {
        int a, b;
        cout << "Enter vertice1 and vertice2: ";
        cin >> a >> b;

        bool conn = set->connected(a, b);
        if (!conn) {
            set->unionSet(a, b);
        }
    }
    for (int i=0; i<3; i++) {
        int a, b;
        cout << "Enter vertices to check connection: ";
        cin >> a >> b;

        bool conn = set->connected(a, b);
        if (conn) cout << "Connected" << endl;
        else cout << "Disconnected" << endl;
    }
}
