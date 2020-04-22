#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin>>a>>b>>c;
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin>>arr[i];
    }
    int cb = b, ca = c,count = 0;
    for (int i = 0; i < a; i++) {
        if (cb == 0 && ca == 0) {
			break;
        }
		else if (ca == 0) {
			cb--;
			if (arr[i] == 1 && ca < c) {
			    ca++;
			}
		}
		else if (cb == 0) {
			ca--;
		}
		else if (arr[i] == 1 && ca < c) {
			cb--;
			ca++;
		}
		else {
		    ca--;
		}
		count++;
    }
    cout<<count;
	return 0;
}
