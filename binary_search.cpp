/*

BINARY SEARCH
-> Search a sorted array by repeatedly diving the search interval in half. If the value of the 
   search key is less than the item in the middle of the interval, narrow the interval to the 
   lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is 
   found or the interval is empty. 

-> This algorithm works on the principle of divide and conquer.

NOTE: The data collection should be in the sorted form.

*/


#include "A_header_file.h" // To reuse functions that are declared in there.

void binary_search(){
    int searchvalue, mid, low, high;
    low = 0;
    high = n-1;
    cout<<"\nEnter the value to search: ";
    cin>>searchvalue;
    
    while(low <= high){
        mid = (low+high)/2;

        if(searchvalue == arr[mid]){
            cout<<searchvalue<<" found in index "<<mid;
            break;
        }

        else if(searchvalue < arr[mid]){
            high = mid-1;
        }

        else{
            low = mid+1;
        }

        if(low > high){
            cout<<searchvalue<<" not found.";
        }
    }
}


int main(){
    getvalues(); // Available in "A_header_file.h" file
    sorting(); // To sort the array if it is not sorted 
    binary_search();

    return 0;
}