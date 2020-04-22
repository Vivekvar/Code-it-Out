#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    stack<int>s;
    int max = 0, p;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            s.push(a[i]);
            if (max < s.size()) {
                max = s.size();
                p = i;
            }
        }
        if (a[i] == 2 && !s.empty() && s.top() == 1) {
            s.pop();
        }
    }
    cout<<max<<" "<<p + 1<<" ";
    stack<int>t;
    int count = 0, maxi = 0, q;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            t.push(a[i]);
            count++;
        }
        if (a[i] == 2 && !t.empty() && t.top() == 1) {
            t.pop();
            count++;
        }
        if (t.empty()) {
            if (maxi < count) {
                maxi = count;
                q = i;
            }
            count = 0;
        }
    }
    cout<<maxi<<" "<<q - maxi + 2;
    return 0;
}
