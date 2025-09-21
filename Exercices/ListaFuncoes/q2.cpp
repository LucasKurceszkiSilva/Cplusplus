#include <bits/stdc++.h>
using namespace std;

int maior(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    if(b>=a && b>=c){
        return b;
    }
    return c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;

    cout << "Digite os 3 numeros: ";
    cin >> a >> b >> c;
    cout << maior(a, b, c) << endl;
    
    return 0;
}