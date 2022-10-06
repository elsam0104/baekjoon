#include<iostream>
#include<vector>
using namespace std;

#define BACK(x) x-1
#define FRONT(x) x+1
#define TELE(x) x*2

vector<int> v;
int n, k, cur,_time;

void bfs()
{
	while (cur != k)
	{

	}

}
int main()
{
	fill(v.begin(), v.end(), 0);
	cin >> n >> k;
	cur = n;
	for (int i = 0; i < k+1; i++)
	{
		v[i] = i+1;
	}
	bfs();
	cout << _time;
}