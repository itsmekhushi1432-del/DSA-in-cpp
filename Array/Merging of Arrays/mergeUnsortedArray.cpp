// Merge two unsorted arrays and then sort them using Bubble Sort

#include <iostream>
using namespace std;

void mergeAndSort(int arr1[], int size1, int arr2[], int size2)
{
    // Create merged array
    int arr3[size1 + size2];

    // Copy first array
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < size2; i++)
    {
        arr3[size1 + i] = arr2[i];
    }

    // Bubble Sort on merged array
    int totalSize = size1 + size2;

    for (int i = 0; i < totalSize - 1; i++)
    {
        for (int j = 0; j < totalSize - i - 1; j++)
        {
            if (arr3[j] > arr3[j + 1])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }

    // Print sorted merged array
    cout << "Merged and Sorted Array:\n";

    for (int i = 0; i < totalSize; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[5] = {50, 10, 40, 30, 20};
    int size1 = 5;

    int arr2[4] = {90, 70, 60, 80};
    int size2 = 4;

    cout << "Array 1:\n";
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;

    cout << "Array 2:\n";
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;

    mergeAndSort(arr1, size1, arr2, size2);

    return 0;
}