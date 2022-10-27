// palindrome check

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char string[n + 1];

    bool flag = true;

    for (int i = 0; i < n; i++){
        if(string[i] != n-1-i){
            flag = false;
        }
    }

if(flag == true){
    cout << "palindrome";
}else{
    cout << "not palindrome";
}

        return 0;
}