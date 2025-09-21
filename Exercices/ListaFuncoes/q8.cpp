#include <bits/stdc++.h>
using namespace std;

int somaiterativa(int n){
    int temp=0;
    for(int i=1;i<=n;i++){
        temp+=i;
    }
    return temp;
}

int somarecursiva(int n, int t){
    if(n==t) return n;
    return t+somarecursiva(n, t+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n, somas;

    do{
        cout << "Digite 1 para usar iterativa e 0 para recursiva" << endl;
        cin >> x;
    }while(x<0 || x>1);

    cout << "Ate que numero quer somar?" << endl;
    cin >> n;
    cout << "Resultado: " << (x ? somaiterativa(n) : somarecursiva(n, 1)) << endl;

    return 0;
}