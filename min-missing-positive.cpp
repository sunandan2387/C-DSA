#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n; j++){
if(i != arr[j]){
    cout << i << " is not present";
    return 0;
}
        }
    }

        return 0;
}
