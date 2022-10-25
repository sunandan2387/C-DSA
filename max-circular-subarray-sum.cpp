
//this gives maximum circular sum of subarray with o(n) time complexity
//not completed
//we have to -ve arr elements of array and then apply kedane algorithm then we have to subtract the output of kedane from the sum of first array


#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int test[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        test[i] = arr[i] * -1;
    }

        // initialization of variables
        int sum = 0, subtract = INT_MIN, totalsum=0;

    for (int i = 0; i < n; i++){
        sum += test[i];
        if(sum<0){
            sum = 0;
        }
        subtract = max(sum, subtract);
}


for (int i = 0; i < n;i++){
    totalsum += arr[i];
}

cout << totalsum - subtract << endl;

return 0;
}
