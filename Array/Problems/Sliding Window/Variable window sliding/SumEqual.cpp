/*** Variable Sliding Window ***/

/*** Given an array of positive integers and an integer K,
find the length of the longest contiguous subarray
whose sum is exactly equal to K.

Logic

Step 1
Start both pointers from index 0.
↓
Step 2
Expand the window by moving right.
↓
Step 3
Add the current element to windowSum.
↓
Step 4
If the sum becomes greater than K,
shrink the window by moving left.
↓
Step 5
Whenever windowSum becomes exactly equal to K,
calculate the current length.
↓
Step 6
Update the maximum length.
↓
Step 7
Continue until the array ends.

NOTE
This Sliding Window approach works ONLY
when all array elements are POSITIVE.

Reason:
If negative numbers are present,
removing an element may increase the sum,
so Sliding Window no longer works correctly.


Time Complexity = O(n)
Space Complexity = O(1)
***/

#include <iostream>

using namespace std;

// longest subarray having sum exactly equal to K
void longestSubarray(int arr[], int n, int k)
{
    int left = 0;              // initial window starts from index 0

    int windowSum = 0;         // currently window sum is zero

    int maxLength = 0;         // initially no valid subarray is found

    // for loop -> to expand the window
    for (int right = 0; right < n; right++)
    {
        // add the new element entering the window
        windowSum += arr[right];

        // shrink the window only when the sum becomes greater than K
        while (windowSum > k)
        {
            // remove the leftmost element
            windowSum -= arr[left];

            // move the left pointer
            left++;
        }

        // if current window sum becomes exactly equal to K
        if (windowSum == k)
        {
            // calculate current window length
            int currentLength = right - left + 1;

            // update maximum length
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
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

    cout << "Enter required sum: " << endl;
    cin >> k;

    longestSubarray(arr, n, k);

    return 0;
}