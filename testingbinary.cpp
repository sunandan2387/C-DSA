#include <bits/stdc++.h>
#include <array>
using namespace std;

int main(){
    int array[]={2,4,1,5,7,3,6,4};
    int n = end(array) - begin(array);

    for (int i = 0; i < n;i++){
        int temp;
        if(array[i+1]<array[i]){
            array[i] = temp;
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }
        for (int i = 0; i < n;i++){
            cout << array[i];
        }

        return 0;
}