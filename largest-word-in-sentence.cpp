// palindrome check

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char string[n + 1];
    cin.getline(string,n);
    cin.ignore();

    int maxlen = 0, currentlen = 0;
  

    for (int i = 0; i < n;i++){
        if(string[i] == ' ' || string[i] == '\0'){
            maxlen = max(maxlen, currentlen);
            currentlen = 0;
        }
            currentlen++;
        if(string[i] == '\0'){
            break;
        }
    }

    cout << "max length is " << maxlen << endl;

    return 0;
}