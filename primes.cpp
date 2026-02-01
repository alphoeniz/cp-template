/* Author: alphoenix */
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
vector<int> spf(N);

void Sieve()
{
    iota(spf.begin(), spf.end(), 0);
    for (int i = 4; i < N; i += 2){
        spf[i] = 2;
    }
    for (int i = 3; i * i <= N; i++){
        if(spf[i] == i){
            for (int j = i * i; j < N; j += i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

vector<int> factorise(int x)
{
    vector<int> ans;
    while(x != 1){
        ans.push_back(spf[x]);
        x /= spf[x];
    }
    return ans;
}

vector<int> getPrimes()
{
    vector<int> ans;
    for(int i = 2; i < N; i++){
        if(spf[i] == i){
            ans.push_back(i);
        }
    }
    return ans;
}