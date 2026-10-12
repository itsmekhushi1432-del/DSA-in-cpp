/*** Variable Sliding Window
It is used when the window size is NOT fixed.
The window expands and shrinks according
to the given condition.

Two pointers are used:

left  -> Starting index of window {removes the oldest element from window}
right -> Ending index of window

Logic

Step 1
Start both pointers from index 0.
↓
Step 2
Expand the window by moving right.
↓
Step 3
If the condition becomes invalid,
shrink the window by moving left.
↓
Step 4
Continue until the array ends.

Time Complexity = O(n)
Space Complexity = O(1)
*/

/*** Given an array of positive integers and a number S, find the smallest length of a contiguous subarray
whose sum is greater than or equal to S.

OR

Find the smallest subarray whose sum is at least S.
*/

#include <iostream>
#include <climits>

using namespace std;

// smallest length subarray
void smallestSubarray(int arr[], int n, int s)
{
    int left = 0; // initial window starts from index 0

    int windowSum = 0; // currently window sum is zero

    int min_length = INT_MAX; // largest possible integer {Assume the answer is infinitely large until we find a smaller one.}

    // for loop -> to expand window
    for (int right = 0; right < n; right++)
    {
        windowSum += arr[right]; // currently right = 0;

        // while loop -> to shrink window
        // heart of variable sliding window {to shrink the window}
        while (windowSum >= s)
        {
            // while loop will be executed when the sum becomes either equal to or greater than s

            int currentLength = right - left + 1; // right is basically the last element that entered the subarray
                                                  // and left is element from start

            if (currentLength < min_length)
            {
                min_length = currentLength;
            }

            // remove the leftmost element
            windowSum -= arr[left]; // remove starting element to check if we can make the window even more smaller

            // move the left pointer
            left++;
        }
    }

    if (min_length == INT_MAX)
    {
        cout << "No valid subarray found." << endl;
    }
    else
    {
        cout << "Smallest Length = " << min_length << endl;
    }
}

int main()
{
    int n;

    cout << "Enter array size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter element of array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s;

    cout << "Enter the required sum: " << endl;
    cin >> s;

    smallestSubarray(arr, n, s);

    return 0;
}