#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){	
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cases; cin >> cases;
    
    for(int i=0;i<cases;i++){
        int fields, imp=0, temp; cin >> fields;
        long long res=0, impsom=0;
        vector<int> imps;
        for(int j=0;j<fields;j++){
            cin >> temp;
            if(temp%2) imps.push_back(temp);
            else res+=temp;
        }
        if (imps.empty()) {
            cout << 0 << endl;
            continue;
        }
        sort(imps.begin(), imps.end(), greater<int>());
        int qnts=(imps.size()+1)/2;
        for(int j=0;j<qnts;j++){
            impsom+=imps[j];
        }
        cout << (res+impsom) << endl;
    }
    return 0;
}