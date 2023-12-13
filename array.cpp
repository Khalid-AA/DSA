/*

ADDING AN ELEMENT IN AN ARRAY
1: Get the position at which the element is to be inserted.
2: Then shift the element in that position to one position forward and do this for all the other 
   elements next to that position.
3: Get the element and insert into the position which is empty.
4: Increament the size of the array by one.


DELETING AN ELEMENT IN AN ARRAY
1: Get the position of the element to be removed.
2: Then shift the next element to the position of the element to be removed, repeat till last 
   element of the array.
3: Decrement the size of the array by one.

*/

#include <iostream>
#define max_size 50
using namespace std;


int arr[max_size], i, n, position;

void get_values(){
    // Inserting into an empty array / Creating an array
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
}

void insertion(){
    cout<<"Enter the index in which to insert: ";
    cin>>position;

    for(i=n-1; i>=position; i--){
        arr[i+1] = arr[i];
    }


    cout<<"Enter the value to insert: ";
    cin>>arr[position];
    n++; 
}

void deleting(){
    cout<<"Enter the position you want to delete from: ";
    cin>>position;

    for(i=position; i<n; i++){
        arr[i] = arr[i+1];
    }
    n--; 
}

void display(){
    cout<<"The elements are: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int choose; // Either delete an element or add an element
    get_values();


    while(choose != 1 && choose !=2){
        cout<<"\nDo you want to:\n1: Delete an element from the array.\n2: Insert an element into the array.\n";
        cin>>choose;

        if (choose == 1){
            deleting();
        }
        else if(choose == 2){
            insertion();
        }
    }

    display();
    return 0;
}