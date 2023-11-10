#include "A_header_file.h"

void insertion_sort(){
    int j; // The other variables 'i' and 'n' are declared in 'A_header_file.h"

    for(i=1; i<n; i++){
        j=i;
        while(arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}


int main(){
    getvalues();
    insertion_sort();
    cout<<"The sorted elements are: ";
    display();

    return 0;
}