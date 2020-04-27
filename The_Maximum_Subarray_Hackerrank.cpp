#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int a[n], flag = 0;
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            if (a[i] >= 0) {
                flag = 1;
            }
        }
        long long int sum = INT_MIN, cursum = 0;
        for (int i = 0; i < n; i++) {
            cursum += a[i];
            if (cursum > sum) {
                sum = cursum;
            }
            if (cursum < 0) {
                cursum = 0;
            }
        }
        cout<<sum<<" ";
        long long int s = 0;
        if (flag) {
            for (int i = 0; i < n; i++) {
                if (a[i] >= 0) {
                    s += a[i];
                }
            }
            cout<<s<<endl;
        }
        else {
            int max = INT_MIN;
            for (int i = 0; i < n; i++) {
                if (a[i] > max) {
                    max = a[i];
                }
            }
            cout<<max<<endl;
        }
    }
    return 0;
}
