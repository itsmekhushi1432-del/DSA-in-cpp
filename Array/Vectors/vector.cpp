/*A vector is basically a dynamic array.
Dynamic means...
It can grow and shrink automatically.
DIFFERENCE BETWEEN ARRAY AND VECTOR ----> The difference is only in memory management—vectors
can grow and shrink automatically.*/

//syntax
/*#include <vector>

using namespace std;

vector<int> v;*///Create a vector that stores integers.
//its a empty vector means size = 0;


//push_back() --> one of the most important function of vector
/*It adds an element at the end of the vector.
*/

//pop_back() ----> opposite of push_back{It removes the last element from the vector.}
//pop_back() does not return the removed element.
//lets check its size

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout <<"Size of vector : "<< v.size()<<endl; //0
    cout<<"Capacity of vector : "<<v.capacity()<<endl;
    //lets add element using push_back()

    v.push_back(10); //each push_back add 1 element
    v.push_back(20);
    v.push_back(30);

    cout<<"Size after pushback: "<<v.size()<<endl; 
    cout<<"Capacity after pushback: "<<v.capacity()<<endl; 

    //printing vector just like array
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
    /*front()
    Returns the first element of the vector.
    back()
    Returns the last element of the vector.*/
    cout <<"First element:"<< v.front()<<endl;;
    cout <<"Last element: "<< v.back()<<endl;
    
    /*empty () ---> It checks whether the vector has any elements.
    if true = 1
    false = 0*/
    cout<<"Empty vector: "<<v.empty()<<endl;

    /* at ---> to access element using different method in vector
    instead of v[0] == v.at(0)
    Then why use at() if [] already works?
    Because at() is safer.
    inn c++ if we are having v.size() = 3 and we try to access v[5] ---> undefined behaviour or even
    crashes but if we use v.at(5) through an error*/
    cout <<"Accessing value using at function: "<< v.at(0) << endl;
    cout <<"Accessing value using at function: "<< v.at(1) << endl;

    /*capacity ---> How many elements the vector can currently hold before it needs to allocate more memory.*/


    //Removing last element from vector
    cout<<"After pop_back(): "<<endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    /* clear ---> It removes all the elements from the vector.*/
    cout<<endl;
    v.clear();
    cout<<"Size after using clear: "<<v.size()<<endl;

    

    return 0;
}