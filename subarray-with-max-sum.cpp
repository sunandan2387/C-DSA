#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

//initialization of variables
    int sum=0, maximum= INT_MIN;

    for (int i = 0; i < n; i++){
        sum += arr[i];
        if(sum<0){
            sum = 0;
        }
        maximum = max(sum, maximum);
}
cout << maximum<<endl;

return 0;
}
