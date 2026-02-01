/* Author: alphoenix */
#include <bits/stdc++.h>
using namespace std;

class UnionFind{
    vector<int> par, size;

public:
    UnionFind(int n){
        par.resize(n);
        iota(par.begin(), par.end(), 0);
        size.assign(n, 1);
    }

	int find(int i){
		return (par[i] == i) ? par[i] : (par[i] = find(par[i]));
	}

 	bool merge(int a, int b) {
		a = find(a); b = find(b);
		if(a == b) return false;
		if(size[a] < size[b]) swap(a,b);
		par[b] = a; size[a] += size[b];
		return true;
	}
};