#include <bits/stdc++.h>
using namespace std;

int main(){	
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cases; cin >> cases;
    
    while(cases--){
     int req, r, ra=0, t, ta=0, time, resp=0; cin >> req >> time;
    for(int i=0;i<req;i++){
        cin >> t >> r;
        int delta=t-ta;
        if((r==ra && delta%2==0) || (r!=ra && delta%2==1)){
            resp+=delta;
        }else{
            resp+=delta-1;
        }
        ra=r;
        ta=t;
     }
     int last=time-t;
     if (last > 0) resp += last;
     cout << resp << endl;
    }
    
    return 0;
}