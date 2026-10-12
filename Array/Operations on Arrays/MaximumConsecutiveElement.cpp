/*Given a binary array (containing only 0 and 1), find the maximum number of consecutive 1's.

Time Complexity = O(n)
Space Complexity = O(1)
*/

#include<iostream>
using namespace std;

// Function to find maximum consecutive 1's
void maximumConsecutiveOnes(int arr[], int n)
{
    int count = 0;      // Current consecutive 1's
    int maxCount = 0;   // Maximum consecutive 1's found so far

    // Traverse the complete array
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            count++;    // Increase current streak

            // Update maximum streak if needed
            if(count > maxCount)
            {
                maxCount = count;
            }
        }
        else
        {
            // Sequence breaks
            count = 0;
        }
    }

    cout << "Maximum Consecutive 1's = " << maxCount << endl;
}

int main()
{
    int n;

    cout << "Enter array size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter binary array elements (0 or 1): " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maximumConsecutiveOnes(arr, n);

    return 0;
}