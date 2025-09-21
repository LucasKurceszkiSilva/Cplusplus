#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int ehprimo(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;

    for(int i=3;i<=(int)sqrt(n);i+=2){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n;

    cout << "primos a partir de: " << endl;
    cin >> k;
    cout << "Quantos? " << endl;
    cin >> n;
    
    while(n){
        k++;
        if(ehprimo(k)){
            cout << k << " ";
            n--;
        }
    }

    return 0;
}