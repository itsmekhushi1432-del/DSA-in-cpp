/* There are two ways to take input in vectors*/

//method 1

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter vector size: "<<endl;
    cin>>n;

    vector <int> v; //vector creation of size = 0 {means initially no element is present in it}

    cout<<"Input elements of vector: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Accessing element of vector: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<v.at(i)<<" ";
    }
    
    //Method 2 --> by assigning size along with creation

    cout<<endl;
    int n2;
    cout<<"Enter vector 2 size: "<<endl;
    cin>>n2;

    vector <int> v2(n2); //size along with creation

    for (int i = 0; i < v2.size(); i++)
    {
        cin>>v2[i];
    }

    //Accessing value of v2
    for (int i = 0; i < n2; i++)
    {
        cout<<v2[i]<<" ";
    }
    
    
    
    return 0;
}