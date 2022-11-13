#include <bits/stdc++.h>
using namespace std;

int main () {
    int N = 10;
    int taotao;
    int n = 0;

    vector<int> appleT(N);

    for (int i = 0; i < N; i++) {
        cin >> appleT.at(i);
    }

    cin >> taotao;

    for (int i = 0; i < N; i++) {
        if (appleT.at(i) <= (taotao + 30)) {
            n += 1;

        }
    }
    cout << n ;

    return 0;
}
