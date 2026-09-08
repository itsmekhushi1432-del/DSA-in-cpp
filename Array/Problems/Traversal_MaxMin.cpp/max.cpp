/*Given an array, print the maximum element.
Example
Input:
7
90 78 101 45 2 34 6
Output:
101*/

#include<iostream>

using namespace std;

int maxElement(int arr[],int n){
    int maxNo = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }
    }return maxNo;
    
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter element of array:  "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans = maxElement(arr,n);
    cout<<"The maximum element is "<<ans<<endl;
    
    return 0;
}