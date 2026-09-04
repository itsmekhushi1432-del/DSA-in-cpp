//Deleting element from the starting of array

#include<iostream>

using namespace std;

/* logic
need to delete element from start so move element into left side by filling the space*/
void deleteStart(int arr[],int &size){
    for (int i = 0; i < size - 1; i++)// size-1 last element is not valid in our array
    {
        arr[i] = arr[i+1]; //shifting element towards our left
    }
    size--;
}

void traverse(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[10] = {10,20,30,40,50};
    int size = 5;

    cout<<"Element before deletion from starting : "<<endl;
    traverse(arr,size);

    cout<<"Elements after deletion from starting : "<<endl;
    deleteStart(arr,size);
    traverse(arr,size);

    return 0;
}