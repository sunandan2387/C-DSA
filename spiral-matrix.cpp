// print matrix in spiral order


#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, tosearch;
    cin >> n >> m;
    int arr[n][m];

    for (int a = 0; a < n;a++){
        for (int b = 0; b < m;b++){
            cin >> arr[a][b];
        }
    }

    cout << endl;

    int rowstart=0, rowend=n-1,colstart=0,colend=m-1;

    while(rowstart <= rowend && colstart<= colend){
        for (int col = colstart; col <= colend;col++){
            cout << arr[rowstart][col] << " ";
        }

        rowstart++;

        for (int row = rowstart; row <= rowend;row++){
            cout << arr[row][colend] << " ";
        }

        colend--;

         for (int col = colend; col >= colstart;col--){
            cout << arr[rowend][col] << " ";
        }

        rowend--;

        for (int row = rowend; row >= rowstart;row--){
            cout << arr[row][colstart] << " ";
        }

        colstart++;
    }

    

    return 0;
}

