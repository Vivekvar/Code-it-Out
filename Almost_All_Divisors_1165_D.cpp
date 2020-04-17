#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin>>t;
	while (t--) {
		cin >> n;
		vector<long long int>a(n), b;
		for (int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		long long int p = a[0] * a[n - 1];
		for (int i = 2; i * 1ll * i <= p; i++) {
			if (p % i == 0) {
				b.push_back(i);
				if (i != p/i) {
					b.push_back(p/i);
				}
			}
		}
		sort(b.begin(), b.end());
		if (a == b) {
			cout<<p<<endl;
		} 
		else {
			cout<<-1<<endl;
		}
	}
	return 0;
}
