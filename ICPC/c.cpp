#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n;
    cin >> n;
    ll arr[1000000];
    
    for(ll i = 1; i <= n; i++) cin >> arr[i];

    while(arr[n] > arr[n - 1] and n > 1){
        n--;
    }

    cout << n - 1;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    return 0;
}