#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, temp;
    cin>>a>>b>>c;
    map<int, int>mp;
    map<int, int>::iterator it;
    while (cin>>temp) {
        if (!mp.empty()) {
            if (mp.find(temp) != mp.end()) {
                mp[temp]++;
            }
            else {
                mp.insert(pair<int, int>(temp, 1));
            }
        }
        else {
            mp.insert(pair<int, int>(temp, 1));
        }
    }
    int p = max(a, max(b, c));
    int arr[p], k = 0;
    for (it = mp.begin(); it != mp.end(); it++) {
        if (it->second >= 2) {
            arr[k] = it->first;
            k++;
        }
    }
    cout<<k<<endl;
    for (int i = 0; i < k; i++) {
        cout<<arr[i]<<endl;
    }
	return 0;
}
