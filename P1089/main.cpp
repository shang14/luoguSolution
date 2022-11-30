#include <bits/stdc++.h>
using namespace std;

int main()
{
    int balance = 0;
    int deposit = 0;
    vector<int> amount(12);

    for (int i = 0; i < 12; i++)
    {
        cin >> amount.at(i);
    }

    for (int i = 0; i < 12; i++)
    {
        balance = balance + 300 - amount.at(i);
        if (balance >= 0)
        {

            deposit += balance - balance % 100;
            balance %= 100;
        }
        else
        {
            cout << -(i + 1);
            break;
        }
    }

    if (balance >= 0)
    {
        cout << deposit * 1.2 + balance;
    }

    return 0;
}