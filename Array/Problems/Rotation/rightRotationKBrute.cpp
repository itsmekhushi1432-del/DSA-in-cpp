/*Right rotation of elements of array by k times {Brute force approach}*/

#include<iostream>

using namespace std;

//function to rotate only one time
void rightRotation(int arr[],int n){
    //store current element
    int temp = arr[n-1]; //last element that is need to be rotated 1 time
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1]; //to shift towards right
    }
    arr[0] = temp;
}

//function to rotate k times
void rightRotationByK(int arr[],int n,int k){

    for (int i = 0; i < k; i++)
    {
        rightRotation(arr,n);
    }
    

}
int main(){
     int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int k; //number of times we want to rotate array
    cout<<"Enter the times you want to rotate array: "<<endl;
    cin>>k;

    cout<<endl;
    cout<<"Elements of array before "<<k<<" times rotation: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rightRotationByK(arr,n,k);
    cout<<"Elements of array after "<<k<<" times rotation: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}