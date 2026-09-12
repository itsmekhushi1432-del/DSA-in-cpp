/*Rotate the element k times {Brute Force}*/

#include<iostream>

using namespace std;

// Function to rotate array left by one position
void leftRotate(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
}

// Function to rotate array left by K positions (Brute Force)
void leftRotateByK(int arr[], int n, int k)
{
    k = k % n;   // Optimization

    for (int i = 0; i < k; i++)
    {
        leftRotate(arr, n); //to rotate k times
    }
}

int main(){
    int n;
    cout<<"Enter array size : "<<endl;
    cin>>n;

    
    int arr[n];
    cout<<"Enter element of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int k;
    cout<<"Enter how many times you want to rotate the elements of array: "<<endl;
    cin>>k;

    cout<<"Elements of array before rotating "<<k<<" times : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    leftRotateByK(arr,n,k);
    cout<<"Elements of array after rotating "<<k<<" times : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}