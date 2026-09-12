/*It is a technique (or pattern) used to solve problems efficiently.
In the Two Pointer Technique, we use two indexes at the same time.
With Two Pointers:

Less code
Cleaner logic
Often O(n)
//How can two pointer be used?
Type 1: Opposite Ends ⭐⭐⭐⭐⭐

One pointer starts at the beginning and one at the end.

L                      R
↓                      ↓
1 2 3 4 5 6 7 8 9

Pointers move towards each other.
Used in:
Reverse Array
Palindrome
Pair Sum (sorted array)

Type 2: Same Direction ⭐⭐⭐⭐
Both pointers start from the beginning.
Used in:

Move Zeroes
Remove Duplicates
Sliding Window (later)*/

//Reversing array using two pointer

#include<iostream>

using namespace std;

void reverseArray(int arr[],int n){
    int left = 0; //first index
    int right = n-1; //last index

    while (left<right)
    {
        int temp = arr[left]; //swapping values
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    } //Time complexity = O(n) and space Complexity = O(1)
    
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

    reverseArray(arr,n);

    cout<<"Reversed array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}