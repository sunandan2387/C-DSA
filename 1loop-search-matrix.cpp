// searching in sorted matrix with time complexity of O(n)


#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[4][4] = {{1, 4, 7, 11},
                     {2, 5, 8, 12},
                     {3, 6, 9, 16},
                     {10, 13, 14, 17}};

    int find = 10;
    bool flag = false;

    int a = 0,
        b = 3;

       for(int i=0; i<=8; i++){
            if(arr[a][b] == find){
                cout << a+1 << b+1;
            }else if(arr[a][b] < find){
                a++;
            }else{
                b--;
            }
        }


    

    return 0;
}

