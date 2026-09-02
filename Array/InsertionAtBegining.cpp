//Inserting element in the begining of array using functions

#include<iostream>

using namespace std;
/* to insert element at start
logic ---> shift all elements towards right and then insert element also don't
forget to increase its size by 1*/
void insertAtBegining(int arr[],int &size,int value){

    //traversing array element from end to shift its value from left to right
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = value; //insertion at begining
    size++;
    cout<<endl;
}

void traverse(int arr[],int size){
    //traversing and printing array element
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {10,20,30,40};
    int size = 4;
    int value = 5; //value to be inserted
    cout<<"Elements before inserting at begining : "<<endl;
    traverse(arr,size);

    insertAtBegining(arr,size,value);
    cout<<"Elements after insertion at begining : "<<endl;
    traverse(arr,size);


    return 0; 
}