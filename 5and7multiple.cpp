#include<bits/stdc++.h>
using namespace std;

int mult(int n, int first, int second){
    int a1 = n/first;
    int a2 = n/second;
    int a3 = n/(first * second);

    return a1 + a2 - a3;
}

int main(){

    int n, first, second;
    cin >> n >> first >> second;
    cout << mult(n, first, second) << endl;

    return 0;
}