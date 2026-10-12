/*** Given an array of positive integers and an integer K, find the length of the longest contiguous subarray
whose sum is less than or equal to K.
*/

#include <iostream>

using namespace std;

// longest length subarray
void longestSubarray(int arr[], int n, int k)
{
    int left = 0; // initial window starts from index 0

    int windowSum = 0; // currently window sum is zero

    int maxLength = 0; // initially no valid subarray is found

    // for loop -> to expand the window
    for (int right = 0; right < n; right++)
    {
        windowSum += arr[right]; // add the new element entering the window

        // while loop -> to shrink the window
        // shrink only when the window becomes invalid
        while (windowSum > k)
        {
            // remove the leftmost element because the current window sum is greater than k
            windowSum -= arr[left];

            // move the left pointer forward
            left++;
        }

        // after shrinking, the current window is valid (windowSum <= k)

        // calculate the current window length using indices
        int currentLength = right - left + 1;

        // if current window is longer than the previous maximum
        // then update the maximum length
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    if (maxLength == 0)
    {
        cout << "No such subarray exists." << endl;
    }
    else
    {
        cout << "Maximum Length of Subarray : " << maxLength << endl;
    }
}

int main()
{
    int n;

    cout << "Enter array size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements of array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;

    cout << "Enter the required sum: " << endl;
    cin >> k;

    longestSubarray(arr, n, k);

    return 0;
}