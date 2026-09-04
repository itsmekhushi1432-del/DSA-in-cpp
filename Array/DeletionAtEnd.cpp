// Deletion of element of the array from the end 

#include<iostream>

using namespace std;
/* No shifting is required because the last element is already at the end.
   We simply decrease the size by 1. */
   
void deleteEnd(int arr[],int &size){
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
    
    cout<<"Element before deletion from end: "<<endl;
    traverse(arr,size);

    cout<<"Element after deletion from end: "<<endl;
    deleteEnd(arr,size);
    traverse(arr,size);

    return 0;
}