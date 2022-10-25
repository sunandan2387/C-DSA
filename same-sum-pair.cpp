// check if there exists two elements in an array such that their sum is equal to give k


#include <bits/stdc++.h>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
    int k = 31;
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    bool flag = false;

    for (int i = 0; i <= (sizeof(arr)/4); i++){
        for (int j = i + 1; j <= (sizeof(arr)/4); j++){
            if(arr[i]+arr[j] == k){
                flag = true;
            }
        }
    }
    cout << flag<<endl;

    return 0;
}    