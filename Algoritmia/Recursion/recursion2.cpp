#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a = 2, b = 7;

void triangulo (ll a, ll b){
    if (a > b) {
        return;
    }
    else{
        for(ll i = 0; i < a; i++) cout << "*";
        cout << endl;
    }
    
    triangulo (a + 1, b); 

    for(ll i = 0; i < a; i++) cout << "*";
    cout << endl;
}

int main(){

    triangulo(a, b);

    return 0;
}