#include <iostream>

using namespace std;

int main(){
    int k;
    int i;
    double j = 0.0;
    cin >> k;

    for (i = 1; ; ++i ){
        j = j + 1.0/i;
        if (j > k) {
            break;
        }


    }
    cout << i ;
    return 0;

}
