//insertion of elements at end

#include<iostream>

using namespace std;

//using functions
void insertAtEnd(int arr[],int &size,int value){
    arr[size] = value;
    size++;
}

//now traversing and printing element
void traverse(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    //time comlexity --> O(1)
    int arr[10] = {10,20,30,40}; //arr[10] -> how many elements we can have

   /*  // we want to insert 50 at end  so there is no need to shift element just insert directly
    // by traversing and increasing its size
    int size = 4; //how many elements  we are using or valid for now
    arr[size] = 50; //arr[4] = 50
    size++; //increasing size by 1

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } */

    int size = 4;
    int value = 50;
    cout<<"Elements before insertion: "<<endl;
    traverse(arr,size);
    insertAtEnd(arr,size,value);

    cout<<"Element after insertion: "<<endl;
    traverse(arr,size);
    
    return 0;
}