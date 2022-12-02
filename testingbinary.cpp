#include <bits/stdc++.h>
#include <array>
using namespace std;

int main(){
    int n, check;

    cin >> n >> check;
    int arr[n];
    cout << " enter array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
  }
  int start = 0;
  int end = n;

  for (int i = 0; i < n;i++)
  {
      int mid = (start + end) / 2;
      if (arr[mid] == check){
          cout << "found at " << mid << endl;
          break;
      }else if(arr[mid]<check){
          start = mid+1;
      }else{
          end = mid-1;
      }
  }

      return 0;
}