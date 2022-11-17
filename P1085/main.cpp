#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>>  week(7, vector<int>(2));
    vector<int> happiness(7);
    int index = 0;
    int max = happiness.at(0);
    bool happy = true;

    for (int i = 0; i < 7; i++){
        cin >> week.at(i).at(0) >> week.at(i).at(1);
    }

    for (int i = 0; i < 7 ; i++){
        happiness.at(i) = week.at(i).at(0) + week.at(i).at(1);
    }

    for (int i = 0; i < 7; i++){
        if (happiness.at(i) > max){
            max = happiness.at(i);
            index = i;
        }
    }

    if ( max > 8) {
        cout << index + 1;
        happy = false;
    } else if (happy == true)
    {
       cout << 0;
    }
    return 0;
}