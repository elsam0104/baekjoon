#include<iostream>
#include<vector>
using namespace std;

#define BACK(x) x-1
#define FRONT(x) x+1
#define TELE(x) x*2

vector<int> v, visited;
int n, k,_time;

void bfs(int cur, int t)
{
	if (visited[cur] != 0 || cur > k * 2 || cur < -k) return;
	if (cur == k)
	{
		_time = t;
		return;
	}
	visited[cur] = 1;
	bfs(FRONT(cur), t + 1);
	bfs(BACK(cur) - 1, t + 1);
	bfs(TELE(cur) * 2, t + 1);

}
int main()
{
	fill(visited.begin(), visited.end(), 0);
	cin >> n >> k;
	v.resize(k);
	for (int i = 0; i < k+1; i++)
	{
		v[i] = i+1;
	}
	bfs(n,0);
	cout << _time;
}