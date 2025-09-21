#include <bits/stdc++.h>
using namespace std;

float harmonicaiterativa(int n){
    float soma=0;
    for(int i=1;i<=n;i++){
        soma+=(1.0/i);
    }
    return soma;
}

float harmonicarecursiva(int n, int t){
    if(t==n) return 1.0/t;
    return (1.0/t)+harmonicarecursiva(n, t+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; 

    do{
        cout << "Digite a 0 para usar a iterativa e 1 para a recursiva: " << endl;
        cin >> x;
    }while(x>1 || x<0);

    cout << "Ate qual numero n voce quer calcular a serie?" << endl;
    cin >> n;

    cout << "Resultado: " << (x ? harmonicarecursiva(n, 1) : harmonicaiterativa(n)) << endl;

    return 0;
}