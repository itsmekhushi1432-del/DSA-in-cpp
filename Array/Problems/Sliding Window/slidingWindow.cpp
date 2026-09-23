/*Sliding Window Technique --->It is a technique (or pattern) used to solve problems
that involve contiguous (continuous) subarrays or substrings.

Instead of calculating every window from scratch,
we reuse the previous window's result.
Most Common Uses:

Maximum Sum Subarray
Minimum Sum Subarray
Average of Subarrays
Maximum Consecutive Ones

Time Complexity = O(n)
Space Complexity = O(1)

Subarray---> A subarray is a continuous (contiguous) part of an array.
The elements must remain together in the same order.
We cannot skip any element.
Examples:-Array --> 1 2 3 4
Possible Subarrays
1
2
1 2


*/

//Given an array and a number k, find the maximum sum of any k consecutive elements.

#include<iostream>

using namespace std;

void maximumSum(int arr[],int n, int k){

    //to check whether window number is valid or not
    if (k>n)
    {
        cout<<"Enter valid size!!"<<endl;
        return;
    }
    
    int windowSum = 0; //first window sum

    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i]; //only first window sum
    }

    //initially our first sum is maximum as rest of the windows are not calculated yet
    int maxSum = windowSum;

    //now to slide the window
    for (int i = k; i < n; i++)
    {
        windowSum = windowSum - arr[i-k] + arr[i]; //i-k = leaving element , arr[i] = entering element

        if (windowSum>maxSum)
        {
            maxSum = windowSum; //as we want maximum sum
        }
        
    }
    cout<<"Maximum Sum: "<<maxSum<<endl;
}

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int k;//window size
    cout<<"Enter window size: "<<endl;
    cin>>k;

    maximumSum(arr,n,k);
    return 0;
}