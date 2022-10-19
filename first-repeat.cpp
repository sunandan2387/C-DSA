#include <bits/stdc++.h>
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

//initialization of variables

    int min;
    int tar[n];
    for (int i = 0; i < n; i++){
        tar[i] = -1;
    }

    for (int i = 0; i < n;i++){
        if(tar[i]!=-1){
            if(tar[i]<i){
            min = min;
            }else{
                min = tar[i];
            }
        }else{
            tar[i] = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}