/* Sorting ---> Arranging elements in a particular order.
Compare two adjacent elements.
FOR LARGEST ELEMENT*/

#include<iostream>

using namespace std;

//void ---. because modifying the existing array not returning anything
void bubbleSort(int arr[],int size){
    for (int i = 0; i < size-1; i++) //for iteration {or no of passes}
    {
        for (int j = 0; j < size-i-1; j++) //for actual work { loop will run till 
        {                                  //size-i-1 // After every pass, one largest element reaches its correct position,
            if(arr[j]>arr[j+1]){            // so next pass needs one less comparison.
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                                          
            }                               
        }                                     
    }
    
}
int main(){
    int arr[8] = {34,90,78,58,60,24,45,2};
    int size = 8;

    cout<<"Elements of array before sorting: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"After Sorting : "<<endl;
    bubbleSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}