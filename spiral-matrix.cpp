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

    int i = 0, j = 0, end = (n*m)-1;

    for (int k = 1; k <= end; k++)
        {
            if (i == 0 && j < m)
            {
                cout << arr[i][j] << endl;
                j++;
            } else if (j == m && i < n)
            {
                cout << arr[i][j] << endl;
                i++;
            }
            else if (i == n-1 && j > 0)
            {
                cout << arr[i][j] << endl;
                j--;
            }
            else if (j == 0 && i > 0)
            {
                cout << arr[i][j] << endl;
                i--;
            }
           
        }

    return 0;
}

