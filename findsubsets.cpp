//display all subsets of a set by bit manipulation

#include<bits/stdc++.h>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int n = 4;
    int set[n] = {1,2,3,4};
    for (int i = 0; i < (1<<n);i++){
        for (int j = 0; j <n ;j++){
            if(i & (1<<j)){
                cout << set[j]<<" ";
            }
        }
    cout << endl;
    }
        
    return 0;
}