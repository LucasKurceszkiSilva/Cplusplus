#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    int p=0, a=1, temp;
    if(n!=0) cout << 1;
    for(int i=1;i<n;i++){
        temp = p+a;
        cout << ", " << temp;
        p=a;
        a=temp;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    fibo(n);
    
    return 0;
}