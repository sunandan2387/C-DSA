//check if number is a power of 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    int check = n & (n - 1);
    if(check == 0){
        cout << "it is power of 2" << endl;
    }else{
        cout << "it is not" << endl;
    }
    return 0;
}