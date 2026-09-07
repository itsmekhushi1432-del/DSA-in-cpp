//Merging two sorted array

#include<iostream>

using namespace std;

void mergedArray(int arr[],int size1,int arr2[],int size2){
    int arr3[size1+size2]; //new array where we will copy the array 1 and 2 values

    //firstly copying arr 1 elements
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr[i];
    }

    // for second array element
    for (int i = 0; i < size2; i++)
    {
        arr3[size1+i] = arr2[i];
    }

    //printing element of arr3 that is the merged array
    for (int i = 0; i < size1+size2; i++)
    {
        cout<<arr3[i]<<" ";
    }
    

}

int main(){
    int arr[4] = {10,20,30,40};
    int size1 = 4;

    cout<<"Elements of array 1: "<<endl;
    for (int i = 0; i < size1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr2[5] = {50,60,70,80,90};
    int size2 = 5;

    cout<<"Elements of array 2: "<<endl;
    for (int i = 0; i < size2; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    cout<<"Merged array: "<<endl;
    mergedArray(arr,size1,arr2,size2);

    
    return 0;
}