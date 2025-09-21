#include <bits/stdc++.h>
using namespace std;

void somaimpar(int a, int b){
    int somas = 0;

    if (a<b) {
        int swap=a;
        a=b;
        b=swap;
    }
    for (int i=b+1;i<a;i++) {
        if (i % 2) {
            somas+=i;
        }
    }
    cout << somas << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; 

    cout << "Digite dois inteiros: ";
    cin >> a >> b;
    somaimpar(a, b);
    
    return 0;
}
