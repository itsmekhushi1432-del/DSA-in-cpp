/*Linear Search checks every element one by one until the required element is found or the array ends.*/

#include<iostream>

using namespace std;

//function will take array to traverse on that size till which the loop will run and the value that is need to be found
int linearSearch(int arr[],int size,int value){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    int arr[size];
    //to take input for array
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int value; //element that we need to search
    cout<<"Enter the value you want to find: "<<endl;
    cin>>value;

    //function calling
    int ans = linearSearch(arr,size,value);
    if(ans == -1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index : "<<ans<<endl;

    }


    return 0;
}
