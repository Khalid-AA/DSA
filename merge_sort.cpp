/*

MERGE SORT
-> Repeatedly breaks down an array into several sub-arrays until each sub-arrays consists 
   of a single element and merging those sub-arrays in a manner that results into a sorted list.
Steps...
• Divide: Divide the unsorted list into n sublists, each containing one element. This is the 
          base case of the recursion.
• Conquer: Recursively sort each sublist. If the sublist has one or zero elements, it is already sorted.
• Merge: Merge the sorted sublists back together to produce a new sorted list.

-> This algorithm works on the principle of divide and conquer.

*/

#include "A_header_file.h" // To reuse functions that are declared in there.
#define size 50

void merge_sort(int arr[], int low, int high, int mid){
	int k, temp[size]; //temp: temporary array
	i = low;
	k = low; //counter for temp array
	j = mid + 1;
 
	// Merge the two parts into temp[].
	while (i <= mid && j <= high){
		if (arr[i] < arr[j]){
			temp[k] = arr[i];
			k++;
			i++;
		}
		else{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid){
		temp[k] = arr[i];
		k++;
		i++;
	}
	// Insert all the remaining values from j to high into temp[].
	while (j <= high){
		temp[k] = arr[j];
		k++;
		j++;
	} 
	// Assign sorted data stored in temp[] to arr[]. (coping value back to original array)
	for (i = low; i < k; i++){
		arr[i] = temp[i];
	}
}

void split(int arr[], int low, int high){
	int mid;
	if (low < high){
		mid=(low+high)/2;
		// Spliting the data into two half.
		split(arr, low, mid);
		split(arr, mid+1, high);
 
		// Merge them to get sorted output.
		merge_sort(arr, low, high, mid);
	}
}

int main(){
    get_values();
    split(arr, 0, n-1);
    cout<<"The sorted elements are: ";
    display();

    return 0;
}