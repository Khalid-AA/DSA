/*

QUICK SORT
-> An element is picked as the pivot and the given array is partitioned around it.
-> The key process in quick_sort is partition(). Target of partitions is, given an array and 
   an element x of array as pivot, put x at its correct position in sorted array and put all 
   elements smaller than x before x, and put all elements greater than x after x. Now the array 
   is divided into two partitions such that "all elements to the left of pivot are smaller than 
   the pivot and all elements to the right of pivot are greater than or equal to the pivot".

Step by Step Process
•	Step 1 - Consider the first element of the list as pivot (i.e., Element at first position in the list).
•	Step 2 - Define two variables i and j. Set i and j to first and last elements of the list respectively.
•	Step 3 - Increment i until list[i] > pivot then stop.
•	Step 4 - Decrement j until list[j] < pivot then stop.
•	Step 5 - If i < j then exchange list[i] and list[j].
•	Step 6 - Repeat steps 3,4 & 5 until i > j.
•	Step 7 - Exchange the pivot element with list[j] element

-> This algorithm works on the principle of divide and conquer.

*/


#include "A_header_file.h" // To reuse functions that are declared in there.

int partition(int arr[], int low, int high){
    i = low;
    j = high+1;
    int pivot = arr[i];

    while(i<j){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low<high){
        int pivot_location = partition(arr, low, high);
        quick_sort(arr, low, pivot_location-1);
        quick_sort(arr, pivot_location+1, high);
    }
}

int main(){
    get_values();
    quick_sort(arr, 0, n-1);
    cout<<"The sorted elements are: ";
    display();

    return 0;
}