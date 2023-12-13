/*

INSERTION SORT
-> Simple sorting algorithm that virtualy splits an array into sorted and unsorted part.
-> To sort an array of size n in ascending order: iterate from arr[1] to arr[n-1], compare the
   current element to its predecessor, if the element is smaller than its prdecessor compare it 
   to the element before. When its position is found, move the greater element one position up
   to make space for the swapped element.

*/


#include "A_header_file.h" // To reuse functions that are declared in there.

void insertion_sort(){
    int j; // The other variables 'i' and 'n' are declared in 'A_header_file.h"

    for(i=1; i<n; i++){
        j=i;
        // This is for ascending order, if you want descending order just change the sign from '<' to '>'
        while(arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}


int main(){
    get_values();
    insertion_sort();
    cout<<"The sorted elements are: ";
    display();

    return 0;
}