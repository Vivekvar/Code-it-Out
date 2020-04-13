#include <bits/stdc++.h>
using namespace std;
struct Luck {
    long long a;
    int b, c;
};
void ans(int n) {
    queue<Luck> q;
    Luck temp;
    temp.a = 4;
    temp.b = 1;
    temp.c = 0;
    q.push(temp);
    temp.a = 7;
    temp.b = 0;
    temp.c = 1;
    q.push(temp);
    while (!q.empty()) {
        int s = q.size();
        while (s--) {
            Luck tmp = q.front();
            q.pop();
            tmp.a *= 10;
            tmp.a += 4;
            tmp.b++;
            if (tmp.a >= n && tmp.b == tmp.c) {
                cout<<tmp.a<<endl;
                return;
            }
            q.push(tmp);
            tmp.a += 3;
            tmp.b--;
            tmp.c++;
            if (tmp.a >= n && tmp.b == tmp.c) {
                cout<<tmp.a<<endl;
                return;
            }
            q.push(tmp);
        }
    }
}
int main() {
    int n;
    cin>>n;
    ans(n);
    return 0;
}
