#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int temp, k = 0;
    bool has = false;
    while (cin>>temp) {
        if (temp == 0) {
            break;
        }
        else if (temp == 1 && k != 0) {
            k--;
        }
        else if (temp == 2 && k != n - 1) {
            k++;
        }
        else if (temp == 3 && a[k] > 0 && has == false) {
            a[k]--;
            has = true;
        }
        else if (temp == 4 && a[k] < m && has == true) {
            a[k]++;
            has = false;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
	return 0;
}
