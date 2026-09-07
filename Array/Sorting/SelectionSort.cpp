// Selection sort ----> find the smallest first then swap

#include<iostream>

using namespace std;

void selectionSort(int arr[],int size){
    for(int i = 0; i<size-1;i++){
        int minidx = i;//assuming first element is the smallest
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = temp;
        
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
    selectionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}