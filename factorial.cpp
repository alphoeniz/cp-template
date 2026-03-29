/* Author: alphoenix */
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
const int mod = 1e9+7;

vector<int> facmod(N);
vector<int> divs[N];

void precompute_divisors(){
    for(int i = 2; i < N; i++){
        for(int j = i; j < N; j += i){
           divs[j].push_back(i);
        }
    }
}

void factorial()
{
	facmod[0] = 1;
    for(int i = 1; i < N; i++){
        facmod[i] = (i * facmod[i-1]) % mod;
    }
}

int modpow(int x, int y)
{
    int res = 1;
    while(y){
        if(y & 1){
            res *= x; res %= mod;
        }
        x *= x; x %= mod;
        y >>= 1;
    }
    return res;
}

int nCr(int n, int r)
{
	return (facmod[n] * modpow((facmod[r] * facmod[n-r]) % mod, mod-2)) % mod;
}
