//Inserting element at specific index
/* Logic:
 we need the index where we want to insert value and what is the value that we need to 
 insert then we have to run the for loop backward till the required index and then 
 initialize the given value outside the loop and increase the size by 1
*/
#include<iostream>

using namespace std;

void insertAtIdx(int arr[],int &size,int value,int idx){
    for (int i = size; i > idx; i--)
    {
        arr[i] = arr[i-1]; //shifting element till required index
    }
    arr[3] = value; //the required index with value
    size++;
}

void printElement(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[10] = {10,20,30,40,50};
    int size = 5;
    int value = 45;
    int idx = 3;
    cout<<"Element before insertion at index : "<<idx<<endl;
    printElement(arr,size);

    insertAtIdx(arr,size,value,idx);
    cout<<"Element after instertion at index : "<<idx<<endl;
    printElement(arr,size);


    return 0;
}