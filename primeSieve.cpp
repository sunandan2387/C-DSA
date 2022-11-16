#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,j=2;
    cin >> n;
    int arr[n];
    int i = 4;
    while(j<i){
        if(i%j ==0){
            arr[i] = 0;
        }else{
            arr[i] = 1;
        }
        i++;
    }
    for (int a = 4; a <= n;a++){
        if(arr[a]==1){
            cout << a << " ";
        }
    }

        return 0;
}