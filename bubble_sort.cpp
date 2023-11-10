#include "A_header_file.h"

void bubble_sort(){
    int j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    getvalues();
    bubble_sort();
    cout<<"The sorted elements are: ";
    display();

    return 0;
}