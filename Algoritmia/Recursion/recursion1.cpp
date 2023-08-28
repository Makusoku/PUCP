#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a = 2, b = 7;
ll stop = a;
void triangulo (ll a, ll b){
    if (b == stop) return;
    if (a == b){
        for(ll i = 0; i < b; i++) cout << "*";
        cout << endl;
        for(ll i = 0; i < b; i++) cout << "*";
        cout << endl;
        return triangulo(a + 1, b);
    }
    if (a > b) {
        for(ll i = 0; i < b - 1; i++) cout << "*";
        cout << endl;
        return triangulo(a, b - 1);
    }
    else{
         for(ll i = 0; i < a; i++) cout << "*";
        cout << endl;
        return  triangulo (a + 1, b); 
    }
}

int main(){

    triangulo(a, b);


    return 0;
}