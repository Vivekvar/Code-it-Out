#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a, b;
    cin>>a>>b;
    if (a % 2 == 0) {
        if (b <= a/2) {
            cout<<2 * b - 1;
        }
        else {
            b -= a/2;
            cout<<2 * b;
        }
    }
    else {
        if (b <= (a/2) + 1) {
            cout<<2 * b - 1;
        }
        else {
            b -= (a/2) + 1;
            cout<<2 * b;
        }
    }
    return 0;
}
