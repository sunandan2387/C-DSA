#include <bits/stdc++.h>
#include <algorithm>
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
    int sum=0, maximum=-999999;

    for (int i = 0; i < n; i++)
    { 
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j;k++){
                sum = sum + arr[k];
                maximum = max(sum, maximum);
            }
            sum = 0;
        }
        
}
cout << maximum<<endl;

return 0;
}
