#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    int num, i, count = 0;
    cout << "Enter a Number: ";
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
        cout << "\nIt is a Prime Number";
    else
        cout << "\nIt is not a Prime Number";
    return 0;

    return 0;
}