/*Binary Search repeatedly divides the search space into two halves until the element is found.
Binary Search works ONLY on a sorted array.*/

/* How binary search actually work?
so instead of searching one by one like linear search we will divide the complete array into three
parts start , end and mid we will use these to compare value and find our target element
mid = start+end/2 if target == arr[mid] then element found at mid
if value>arr[mid] then start = mid+1 
and if value < arr[mid] then end = mid-1 by droping the other side completely*/

#include<iostream>

int binarysearch(int arr[],int size,int target){
    int start,end,mid;
    start = 0;
    end = size-1;
    
    while(start<=end){ // Continue searching while a valid search space exists.
        mid = (start+end)/2;
        if(target == arr[mid]){
            return mid;
        }else if(target>arr[mid]){
            start = mid+1;
        }else if(target<arr[mid]){
            end = mid-1;
        }
    }
    return -1;
}

using namespace std;

int main(){
    int arr[8] = {1,13,25,45,67,89,90,101};
    int size = 8;

    int target = 45;
    int ans = binarysearch(arr,size,target);

    if(ans == -1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index: "<<ans<<endl;
    }

    return 0;
}