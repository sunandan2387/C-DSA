#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos){
  return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos){
  return (n | (1 << pos));
}

int clearBit(int n, int pos){
  int mask = ~(1 << pos);
  return (n & mask);
}

main(){

  cout << clearBit(5, 2) << endl;

  return 0;
}