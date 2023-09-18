#include <bits/stdc++.h>
using namespace std;

bool criba[30000];

void solve(){
    for(int i = 0; i < 30000; i++) criba[i] = true;
    criba[0] = criba[1] = false;
    
    for(int i = 2; i * i <= 30000; i++){
        if(criba[i] == false) continue;
        else for(int j = i * 2; j <= 30000; j += i){
            criba[j] = false;
        }
    }

    for(int i = 0; i < 3000; i++){
        if(criba[i]) cout << i << " ";
    }
}

int main(){
    solve();
    return 0;
}