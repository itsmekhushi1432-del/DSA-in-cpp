/*** Given an array and a number k,
find the minimum sum of any k consecutive elements. ***/

#include<iostream>
using namespace std;

// Time Complexity = O(n)
// Space Complexity = O(1)

void minimumSum(int arr[], int n, int k)
{
    // To check whether the window size is valid or not 
    if(k > n)
    {
        cout<<"Invalid Window Size!"<<endl;
        return;
    }

    // Calculate the first window sum
    int windowSum = 0;

    for(int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }

    // Initially only the first window is calculated,
    // so assume it is the minimum.
    int minSum = windowSum;

    // Slide the window
    for(int i = k; i < n; i++)
    {
        // Remove leaving element and add entering element
        windowSum = windowSum - arr[i-k] + arr[i];//arr[i-k] = remove element , arr[i] = next element enter

        // Update minimum sum
        if(windowSum < minSum)
        {
            minSum = windowSum;
        }
    }

    cout<<"Minimum Sum = "<<minSum<<endl;
}

int main()
{
    int n;

    cout<<"Enter array size: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: "<<endl;

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int k;

    cout<<"Enter window size: "<<endl;
    cin>>k;

    minimumSum(arr, n, k);

    return 0;
}