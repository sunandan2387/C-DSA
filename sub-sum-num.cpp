#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,s;
    cin >> n>>s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i, j, sum=0;

    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            sum = sum + arr[j];
            if(sum==s){
                cout << "first " << i+2 << " last " << j+1 << endl;
                break;
            }
        }
    }

        return 0;
}
