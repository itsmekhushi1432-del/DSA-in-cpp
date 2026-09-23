/*Given an array and a number k, print the average of every subarray (window) of size k.*/

#include<iostream>

using namespace std;

//Time Complexity = O(n)
//Space Complexity = O(1)

void AverageWindow(int arr[],int n,int k){
    //window size valid
    if(k>n){
        cout<<"Enter valid window size!"<<endl;
        return;
    }

    //calculate first window sum
    int windowSum = 0;

    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }

    //average of the first window sum
    cout<<"Average of window 1: "<<(float)windowSum/k<<endl;

    //slide the window
    for (int i = k; i < n; i++)
    {
        //Removing leaving element and adding entering element
        windowSum = windowSum - arr[i-k]+arr[i];

        //printing average of current window
        cout<<"Average of window"<<i+k<<" : "<<(float)windowSum/k<<endl;
    }
}

int main(){
    
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter element of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int k;
    cout<<"Enter window size: "<<endl;
    cin>>k;

    AverageWindow(arr,n,k);

    return 0;
}