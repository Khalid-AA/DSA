#include "A_header_file.h"

void selection_sort(){
    for(i=0; i<n; i++){
        int minpos = i;  // minpos -> minimum_position: hold the index of the smallest element
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[minpos]){
                minpos = j;
            }
        }
        swap(arr[i], arr[minpos]);
    }
}

int main(){
    getvalues();
    selection_sort();
    cout<<"The sorted elements are: ";
    display();

    return 0;
}