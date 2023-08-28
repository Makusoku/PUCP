#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n_max, arr[10][10];
vector<ll> sumas;
ll const inf = -1000000;

ll max_sum(ll i, ll j ){

    if(i == 0 and j == 0){
        return arr[0][0];
    }   

    if(i < 0 or j < 0){
        return inf;
    }

    return arr[i][j] + max(max_sum(i - 1, j), max_sum(i, j - 1));
    
}

void solve(){
    ll n, m;
    cin >> n >> m;
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    
    cout << max_sum(n - 1, m - 1);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   