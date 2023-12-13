/*

SELECTION SORT
-> Sorting algorithm that sorts an array by repeatedly finding the minimum element 
   (considering ascending order) from unsorted part and putting it at the beginning. 
-> The algorithm maintains two subarrays in a given array: The subarray which is already sorted 
   and the remaining subarray which is unsorted.
-> In every iteration of selection sort, the minimum element (considering ascending order) 
   from the unsorted subarray is picked and moved to the sorted subarray. 

*/


#include "A_header_file.h" // To reuse functions that are declared in there.

void selection_sort(){
    for(i=0; i<n; i++){
        int minpos = i;  // minpos -> minimum_position: hold the index of the smallest element
        for(j=i+1; j<n; j++){
            // This is for ascending order, if you want descending order just change the sign from '<' to '>'
            if(arr[j]<arr[minpos]){
                minpos = j;
            }
        }
        swap(arr[i], arr[minpos]);
    }
}

int main(){
    get_values();
    selection_sort();
    cout<<"The sorted elements are: ";
    display();

    return 0;
}