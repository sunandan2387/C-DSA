//searching in 2d array 

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, tosearch;
    cin >> n >> m >> tosearch;
    int arr[n][m];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(arr[i][j] == tosearch){
                cout << "element is at " << i << " row and " << j << " column"<<endl;
            }
        }
    }

        return 0;
}