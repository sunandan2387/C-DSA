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
    int i=1;
    while (i<=n){
        for (int j = 1; j <= n; j++){
            if(i = arr[j]){
                i++;
            }else if(i != arr[j]){
    cout << i << " is not present";
    return 0;
}
        }
    }

        return 0;
}
