/*Right rotation of element of array k times using extra array{Optimization}*/

#include <iostream>
using namespace std;

// Time Complexity = O(n)
// Space Complexity = O(k)

void rightRotationByK(int arr[], int n, int k)
{
    k = k % n;      // Optimization

    int temp[k];    // Temporary array

    // Step 1: Store last k elements
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift remaining elements to the right
    for (int i = n - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }

    // Step 3: Copy temp elements at the beginning
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter number of rotations: ";
    cin >> k;

    cout << "\nArray before rotation:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    rightRotationByK(arr, n, k);

    cout << "\nArray after rotation:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}