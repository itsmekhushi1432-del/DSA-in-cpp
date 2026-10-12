/*Given an array and an integer k, find the maximum average of any contiguous subarray of size k.
Example:
Array = 1 12 -5 -6 50 3
k = 4
*/

#include<iostream>
#include<iomanip>

using namespace std;

void maxAverage(int arr[],int n,int k){
    cout<<fixed<<setprecision(2);

    //check whether the window size is valid or not
    if(k<=0 || k>n){
        cout<<"Enter valid window size!"<<endl;
        return;
    }

    //window sum
    int windowSum = 0;

    //first window sum
    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }
    
    double maxAverage = (double)windowSum/k;

    for (int i = k; i < n; i++)
    {
        windowSum = windowSum-arr[i-k]+arr[i];
        double currAverage = (double)windowSum/k;

        if(currAverage>maxAverage){
            maxAverage = currAverage;
        }
        
    }
    cout<<"Maximum Average : "<<maxAverage<<endl;

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

    int k;
    cout<<"Enter window size: "<<endl;
    cin>>k;

    maxAverage(arr,n,k);
    
    return 0;
}