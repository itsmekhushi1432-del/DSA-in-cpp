/*Moving the elements of an array in one direction (left or right) while keeping all the elements in the array.
Unlike reverse, the order is mostly preserved, only the starting position changes.
LEFT Rotation

Think:
First goes Last

RIGHT Rotation

Think:
Last comes First
*/

//Rotation on left

#include<iostream>

using namespace std;
 //Time Complexity = O(n) andSpace complexity = O(1)
void leftRotation(int arr[],int n){
    int temp = arr[0]; //storing our first value
    for (int i = 0; i < 6; i++)
    {
        arr[i] = arr[i+1]; //we need to shift all the element towards left
    }
    arr[6] = temp;
    
}

void rightRotation(int arr[],int n){
    int temp = arr[6]; //storing our first value
    for (int i = 6; i > 0; i--)
    {
        arr[i] = arr[i-1]; //we need to shift all the element towards right
    }
    arr[0] = temp;
    
}

int main(){
    int arr[7] = {0,1,2,3,4,5,6};

    cout<<"Element of array before rotation : "<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"After Rotation On Left : "<<endl;
    leftRotation(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"After Rotation On Right : "<<endl;
    rightRotation(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}