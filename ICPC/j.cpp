#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, x, y;
    cin >> n >> x >> y;

    ll total_xor, a;
    cin >> total_xor;
    for(ll i = 1; i < n; i++){
        cin >> a;
        total_xor ^= a;
    }
    
    total_xor ^= y;

    if((x + total_xor) & 1){
        cout << "Bob" << endl;
    }
    else{
        cout << "Alice" << endl;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}