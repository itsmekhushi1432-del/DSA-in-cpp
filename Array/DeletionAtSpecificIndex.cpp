//Deleting element of array at a specific index

#include<iostream>

using namespace std;

/* logic
 we need to delete element from a specific index so start the loop or you can
 say traversing from index to the size-1 as we only need to shift element after
 the index and then decrease the size by 1*/
void deleteIdx(int arr[],int &size,int idx){
    for (int i = idx; i < size-1; i++)
    {
        arr[i] = arr[i+1]; 
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
    int arr[10] = {1,2,8,90,54,60,78};
    int size = 7; //valid element 7 in array
    int idx = 3;

    cout<<"Element before deletion from index "<<idx<<endl;
    traverse(arr,size);

    cout<<"Elements after deletion from index "<<idx<<endl;
    deleteIdx(arr,size,idx);
    traverse(arr,size);

    return 0;
}