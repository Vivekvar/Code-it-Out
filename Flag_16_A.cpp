#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    char a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    int flag = 0;
    char p;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (a[i][j] != a[i][j + 1]) {
                flag = 1;
                break;
            }
            if (a[i][j] == p && i != 0) {
                flag = 1;
                break;
            }
        }
        p = a[i][0];
    }
    if (flag) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
    return 0;
}
