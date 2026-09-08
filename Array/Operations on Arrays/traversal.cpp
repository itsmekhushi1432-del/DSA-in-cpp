// creating an array and traversing it every element using loop

#include<iostream>
using namespace std;

int main(){

    //array creation
    int arr[5] = {10,20,30,40,50};

    cout<<"Elements of array are : "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Program Terminated..";
    

    return 0;
}