#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    map<string, int>m;
    while (n--) {
        cin>>s;
        if (m.empty()) {
            m[s] = 0;
            cout<<"OK"<<endl;
        }
        else {
            auto it = m.find(s);
            if (it != m.end()) {
                int q = it->second;
                q++;
                cout<<it->first<<q<<endl;
                it->second = q;
            }
            else {
                m[s] = 0;
                cout<<"OK"<<endl;
            }
        }
    }
	return 0;
}
