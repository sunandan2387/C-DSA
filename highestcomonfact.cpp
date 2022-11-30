#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    cout << "enter size of two array" << endl;
    int a, b;
    cin >> a >> b;
    int arraya[a], arrayb[b];
    cout << "1st array" << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> arraya[i];
    }
    cout << "2nd array" << endl;
    for (int ii = 0; ii < b; ii++)
    {
        cin >> arrayb[ii];
    }
    // the code starts here, hold your seat
    // here we go
    int c[a + b];
    int c_index = 0;
    int old;
    if (max(a, b) == a)
    {
        w
        }
        for (int k = old + 1; k < a + b; k++)
        {
            c[c_index] = arraya[k];
            c_index = c_index + 1;
        }
    }
    else
    {
        for (int j = 0; j < a; j++)
        {
            c[c_index] = arraya[j];
            c_index = c_index + 1;
            c[c_index] = arrayb[j];
            c_index = c_index + 1;
            old = j;
        }
        for (int k = old + 1; k < a + b; k++)
        {
            c[c_index] = arrayb[k];
            c_index = c_index + 1;
        }
    }
    for (int i = 0; i < a + b; i++)
    {
        cout << c[i] << " ";
    }
}