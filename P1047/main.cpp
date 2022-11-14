#include <bits/stdc++.h>
using namespace std;

int main () {
    int roadL;
    int m;
    int tree = 0;
    cin >> roadL >> m;
    vector<int> startN(m);
    vector<int> finN(m);
    vector<int> treeN(roadL + 1);

    for (int i = 0; i < m; i++){
        cin >> startN.at(i) >> finN.at(i) ;
    }
    
    for (int i = 0; i < (roadL +1); i++){
        treeN.at(i) = 1;
    }

    for (int i = 0; i < m; i++){
        for (; startN.at(i) <= finN.at(i); startN.at(i)++){
            treeN.at(startN.at(i)) = 0;   
        }
    }

    for (int i =0; i< (roadL + 1); i++){
        tree += treeN.at(i);

    }

    cout << tree;
    return 0;
}
