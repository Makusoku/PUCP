#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll caj, cam;
    cin >> caj >> cam;
    ll n_max = powl(cam, caj);

    for(ll i = 0; i < n_max; i++){
        ll arr[caj] = {};
        ll y = i, k = 0;
        while(y > 0){
            arr[k] = y % cam;
            y /= cam;
            k++;
        }
        for(auto it : arr){
            cout << it << " ";
        }
        cout << endl;
    }

    

}

int main(){

    solve();

    return 0;
}