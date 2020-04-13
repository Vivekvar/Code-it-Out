#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    string str = "";
    int p = 0, q = n - 1, given = -1;
    while (1) {
        if (a[p] <= a[q]) {
            if (a[p] > given) {
                str += 'L';
                given = a[p];
                p++;
            }
            else if (a[q] > given) {
                str += 'R';
                given = a[q];
                q--;
            }
            else {
                break;
            }
        }
        else {
            if (a[q] > given) {
                str += 'R';
                given = a[q];
                q--;
            }
            else if (a[p] > given) {
                str += 'L';
                given = a[p];
                p++;
            }
            else {
                break;
            }
        }
        if (p == n || q == -1) {
            break;
        }
    }
    cout<<str.length()<<endl;
    cout<<str;
    return 0;
}
