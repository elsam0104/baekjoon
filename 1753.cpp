#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define endl "\n"
int V, E, start, u, v, w;
vector<pair<int, int>> weight[20001];
const int INF = 987654321;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;


vector<int>dijkstra(int start, int vertex)
{
	vector<int>dist(vertex, INF);
	pq.push(make_pair(0, start));
	dist[start] = 0;
	while (!pq.empty())
	{
		int now = pq.top().second;
		int sToNow = pq.top().first;
		pq.pop();

		if (dist[now] != sToNow) { continue; }

		for (auto n :weight[now])
		{
			int neighbor = n.second;
			int NowLoNeighbor = n.first;
			if (dist[now])
			{

				pq.push(make_pair(dist[neighbor], neighbor));
			}
		}
	}
	return dist;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> V >> E >> start;

	for (int i = 0; i < E; i++)
	{
		cin >> u >> v >> w;
		weight[u].emplace_back(w, v);
	}

	vector<int>result = dijkstra(start, V + 1);

	for (int i = 1; i < V; i++)
	{
		if (result[i] == INF) cout << "INF" << endl;
		else cout << result[i] << endl;
	}
}