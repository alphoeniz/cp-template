/* Author: alphoenix */
#include <bits/stdc++.h>
using namespace std;
#define int long long

#define INF 1000000000000000000

class SegTree
{
	vector<int> seg;

public:
	SegTree(int n){
		if (n && (!(n & (n-1)))){
            seg.resize(2 * n);
        }else{
            seg.resize(4 * (1LL << (63 - __builtin_clzll(n))));
        }
	}

	void build(int idx, int low, int hi, vector<int> &a){
		if(low == hi){
            seg[idx] = a[low];
        }else{
			int mid = (low+hi) >> 1;
			build(2*idx+1, low, mid, a);
			build(2*idx+2, mid+1, hi, a);
			seg[idx] = min(seg[2*idx+1],seg[2*idx+2]);
		}
	}

	int query(int idx, int low, int hi, int l, int r){
		if(r < low || hi < l) return INF;
		if(l <= low && hi <= r) return seg[idx];
		int mid = (low + hi) >> 1;
		int q1 = query(2*idx+1, low, mid, l, r);
		int q2 = query(2*idx+2, mid+1, hi, l, r);
		return min(q1, q2);
	}

	void update(int idx, int low, int hi, int k, int val){
		if(low == hi){seg[idx] = val; return;}
		int mid = (low+hi) >> 1;
		if(k <= mid){
            update(2*idx+1, low, mid, k, val);
        }else{
            update(2*idx+2, mid+1, hi, k, val);
        }
		seg[idx] = min(seg[2*idx+1], seg[2*idx+2]);
	}
};