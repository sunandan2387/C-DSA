// print transpose of matrix


#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n][n];

    for (int a = 0; a < n;a++){
        for (int b = 0; b < n;b++){
            cin >> arr[a][b];
        }
    }

    cout << endl;

   //start

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j){
                cout << arr[i][j]<<" ";
            }else{
                cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }

        return 0;
}

