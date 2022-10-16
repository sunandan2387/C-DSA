#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter elements of array\n";
    for (int i = 0; i < n; i++)
    {  
        cin >> arr[i];
}

// main code starts

for (int i = 1; i < n; i++){
    int current = arr[i];
    int j = i - 1;
    while(arr[j] > current && j>=0){
        int hold = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = hold;
        j--;
    }
    arr[j + 1] = current;
}

for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << endl;

return 0;
}