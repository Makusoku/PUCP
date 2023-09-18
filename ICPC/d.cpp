#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;
    bool cond = false;
    for(ll i = x; i <= y; i++){
        if(l <= i * k and r >= i * k){
            cond = true;
            break;
        }
    }

    if(cond) cout << "YES";
    else cout << "NO";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    return 0;
}