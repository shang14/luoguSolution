#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n ;
    vector<int> point(1000);
    vector<int> ranN(n);
    int num = 0;

    for (int i = 0; i < 1000; i++){
        point.at(i) = 0;
    }

    for (int i = 0; i < n; i++){
        cin >> ranN.at(i);
    }

    for (int i = 0; i < n; i++){
        point.at(ranN.at(i)) = 1;
    }

    for (int i = 0; i < 1000; i++){
        num += point.at(i);
    }

    cout << num << endl;

    for (int i = 0; i < 1000; i++){
        if (point.at(i) == 1){
            cout << i << ' ';
        }
    }

    return 0;
}
