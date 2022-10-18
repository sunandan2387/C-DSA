#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

//initialization of variables

    int record = -1;
    int j;
    int count = 0;

    while(j<n){
        if((a[j]>record && a[j]>a[j+1])||(j==n-1 && a[j]>record)){
            record = a[j];
            count++;
        }
        j++;
    }
    cout << count << endl;
    return 0;
}