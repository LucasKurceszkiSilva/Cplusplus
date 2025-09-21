#include <bits/stdc++.h>
using namespace std;

float euleriterativo(int n){
    float somas = 0;
    int fat=1;
    for(int i=1;i<=n;i++){
        somas+=(1.0/fat);
        fat*=i;
    }
    return somas;
}

float eulerrecursivo(int n, int t, int fat){
    if(t>n) return 0;
    if(t>0) fat*=t;
    return (1.0/fat)+eulerrecursivo(n, t+1, fat);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; 

    do{
        cout << "Digite a 0 para usar a iterativa e 1 para a recursiva: " << endl;
        cin >> x;
    }while(x>1 || x<0);

    cout << "Ate qual numero n voce quer calcular euler: " << endl;
    cin >> n;

    cout << "Resultado: " <<  (x ? eulerrecursivo(n, 0, 1) : euleriterativo(n)) << endl;

    return 0;
}