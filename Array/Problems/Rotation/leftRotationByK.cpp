/* Left rotation by k using extra array 
Logic

Step 1
Store the first K elements in a temporary array.
↓

Step 2
Shift the remaining elements towards the left.
↓

Step 3
Copy the temporary array to the last K positions.
*/

#include<iostream>

using namespace std;

//Time complexity = O(n) and Space Complexity = O(k) size of array
//Left rotation by k using extra array(optimisation)
//function to rotate array
void leftArrayByK(int arr[],int n,int k){

    k = k%n; //to optimize if k>n

    int temp[k]; //temporary array to store k elements
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];//to store the elements that is need to be rotated
    }

    //now shifting element to left
    for (int i = k; i < n; i++)
    {
        arr[i-k] = arr[i]; //to move the element towards the LEFT.As we have already stored 0,1 index element in temp
    } //but they are still present in our main array so we are shifting rest element towards left to fill there places

    //copy temp array element into final rotated array
    for (int i = 0; i < k; i++)
    {
        arr[n-k+i] = temp[i];  //n-k+i because the last k position start from n-k where we need to insert those element that we need to rotate
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

    leftArrayByK(arr,n,k);
    cout<<"Elements of array after "<<k<<" times rotation: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}