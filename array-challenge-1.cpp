#include <iostream>
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
    int count = 0, avg, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == avg)
        {
            count++;
        }
    }

    cout << "it contains " << count << " " << avg << " element\n";

    return 0;
}