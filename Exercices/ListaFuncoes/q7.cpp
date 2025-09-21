#include <bits/stdc++.h>
using namespace std;

int soma_especial(int n, int k, int x){
    int somas=0, m;
    while(x){
        x++;
        if(x%k==0){
            m=x/k;
            x=0;
        }
    }
    while(n--){
        somas+=m*k;
        m++;
    }
    return somas;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, x;
    cin >> n >> k >> x;
    cout << soma_especial(n, k, x);
    
    return 0;
}