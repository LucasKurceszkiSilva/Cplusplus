#include <bits/stdc++.h>
using namespace std;

int b;

int isdigit(char a){
    b = (int)a;
    if(b>=48 & b<=57){
        return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b;

    cout << "insira um caractere: " << endl;
    char a; cin >> a;
    if(isdigit(a)){
        b = (int)a - 48;
        cout << b << endl;
    }
    
    return 0;
}