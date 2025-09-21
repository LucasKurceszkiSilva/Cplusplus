#include <bits/stdc++.h>
using namespace std;

int tipo_triangulo(float a, float b, float c){
    if((a+b<=c) | (b+c<=a) | (c+a<=b)){
        return 0;
    }
    else{
        if(a==b & a==c & b==c){
            return 1;
        }else if(a==b | b==c | c==a){
            return 2;
        }else{
            return 3;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float a, b, c, res;

    cout << "Digite os 3 lados do triangulo: " << endl;
    cin >> a >> b >> c;
    res=tipo_triangulo(a, b, c);
    cout << res << endl;
    
    return 0;
}