#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos){
  return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos){
  return (n | (1 << pos));
}

main(){

  cout << setBit(5, 1) << endl;

  return 0;
}