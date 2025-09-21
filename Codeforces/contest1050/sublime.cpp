#include <bits/stdc++.h>
using namespace std;

int main(){
    //sync_with_stdio(false);
    cin.tie(nullptr);
    int i, a, b;cin >> i;
    for(int j=0;j<i;j++){
        cin >> a;
        cin >> b;

        if(b%2==0){
            cout << "0" << endl;
        }else{
            cout << a << endl;
        }
    }
    return 0;
}