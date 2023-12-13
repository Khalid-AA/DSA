/*

BUBBLE SORT
-> Sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
-> If the given array has to be sorted in ascending order, then bubble sort will start by comparing 
   the first element of the array with the second element, if the first element is greater than the 
   second element, it will swap both the elements, and then move on to compare the second and the 
   third element, and so on.

-> If we have total n elements, then we need to repeat this process for n-1 times.

*/


#include "A_header_file.h" // To reuse functions that are declared in there.

void bubble_sort(){
    int j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            // This is for ascending order, if you want descending order just change the sign from '>' to '<'
            if(arr[j]>arr[j+1]){ 
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    get_values();
    bubble_sort();
    cout<<"The sorted elements are: ";
    display();

    return 0;
}