#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    cin >> n;
    int arr[n];
    cout << "enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // logic starts
    float largest = 0, smallest = 99999999, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= largest)
        {
            largest = arr[i];
        }
        else
        {
            largest = largest;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= smallest)
        {
            smallest = arr[i];
        }
        else
        {
            smallest = smallest;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == largest)
        {
            count++;
        }
    }
    largest = largest * count;
    float avg = (smallest + largest) / (count + 1);

    return 0;
}