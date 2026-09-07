/*Insertion Sort ---> Just take one element and insert it into its correct position.
Unlike Bubble Sort and Selection Sort,
Insertion Sort always keeps the left side sorted.

we assume that the first element is already sorted.
Why?
Because a single element is always sorted by itself.*/

#include<iostream>

using namespace std;

void insertionSort(int arr[],int size){
    for (int i = 1; i < size; i++) //from i=1 as we have considered 1st element as sorted that arr[0] = sorted
    {
        int key = arr[i];// Store the current element that needs to be inserted into the sorted part.
        int j = i-1; //previous element with which we have to compare

        while(j>=0 && arr[j]>key){//while loop because we don't know the number of iterations
            arr[j+1] = arr[j];// Shift the larger element one position to the right.
            j--;     //arr[j]>key to compare the previous value is it greater than our current value or not
        }
        arr[j+1] = key; //after loop terminated at the arr[j] the index become -1 that is not possible so to give arr[0] = our assumed value smallest value
    }
    

}

int main(){
    int arr[8] = {90,89,101,45,23,78,2,15};
    int size = 8;

    cout<<"Elements before sorting using Selection Sort: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Elements after sorting using Selection Sort: "<<endl;
    insertionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}