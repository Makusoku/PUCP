#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n_max, arr[10][10];
vector<ll> sumas;
ll const inf = -1000000;
ll n, m;

ll max_sum(ll i, ll j ){

    if(i == n - 1 and j == m - 1){
        return arr[i][j];
    }   

    if(i > n - 1 or j > m - 1){
        return inf;
    }

    return arr[i][j] + max(max_sum(i + 1, j), max_sum(i, j + 1));
    
}

void solve(){
    cin >> n >> m;
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    
    cout << max_sum(0, 0);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   