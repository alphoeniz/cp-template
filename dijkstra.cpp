/* Author: alphoenix */
#include <bits/stdc++.h>
using namespace std;

vector<int> dis, par;
int INF = 1e9;

void dijkstra(int src, int n) {
dis.assign(n, INF);
par.assign(n, -1);
dis[src] = 0;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q; q.push({0, src});
while (!q.empty()){
	auto [d, u] = q.top(); q.pop();
    if (d != dis[u]) continue;
	for (auto [v, w]:g[u]) {
		if(dis[u] + w < dis[v]){
			dis[v] = dis[u] + w; par[v] = u;
			q.push({dis[v], v});
		}
	}
}