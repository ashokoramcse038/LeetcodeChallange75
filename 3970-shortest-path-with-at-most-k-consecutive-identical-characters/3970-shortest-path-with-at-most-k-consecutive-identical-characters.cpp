class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);

    for (auto& e : edges) {
        adj[e[0]].push_back({e[1], e[2]});
    }

    if (k == 0) return -1;

    vector<vector<int>> dist(n, vector<int>(k + 1, INT_MAX));

    priority_queue<
        tuple<int, int, int>,
        vector<tuple<int, int, int>>,
        greater<tuple<int, int, int>>
    > pq;

    dist[0][1] = 0;
    pq.push({0, 0, 1});

    while (!pq.empty()) {
        auto [cost, node, count] = pq.top();
        pq.pop();

        if (node == n - 1) return cost;

        if (cost != dist[node][count]) continue;

        for (auto [next, weight] : adj[node]) {
            int newCount;

            if (labels[next] == labels[node]) {
                newCount = count + 1;
            } else {
                newCount = 1;
            }

            if (newCount > k) continue;

            int newCost = cost + weight;

            if (newCost < dist[next][newCount]) {
                dist[next][newCount] = newCost;
                pq.push({newCost, next, newCount});
            }
        }
    }

    return -1;

    }
};