#include <bits/stdc++.h>
using namespace std;
int ans(long long base, long long n, long long M) {
    if(n==0)
       return 1;
    if(n==1)
        return base;
    long long p = ans(base, n/2, M);
    if(n % 2 == 0)
        return (p * p) % M;
    else
        return (((p * p) % M ) * base ) % M;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    cout<<ans(n, 1000000005, 1000000007);
    return 0;
}
