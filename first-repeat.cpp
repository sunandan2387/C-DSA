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

//initialization of variables


    int tar[n];
    for (int i = 0; i < n; i++){
        tar[i] = -1;
    }

    int mint;

    for (int i = 0; i < n;i++){
        if(tar[arr[i]] != -1){

            mint = mint;
        }else{
            tar[arr[i]] = i;
        }
    }

    if(mint = INT_MAX){
        cout << "-1" << endl;
    }else{
        cout << mint + 1 << endl;
    }
    cout<< mint << endl;
    return 0;
}

//checking needed