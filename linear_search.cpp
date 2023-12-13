/*

LINEAR SEARCH
-> Is a sequential search algorithm that utilizes the concept of comparisons to get data in a list.
-> Each element is examined until a match is found, starting from the beginning of the data set, 
   to the end. The search is finished and terminated once the target element is located.

*/


#include "A_header_file.h" // To reuse functions that are declared in there.

void linear_search(){
    int searchvalue;
    cout<<"Enter the searchvalue: ";
    cin>>searchvalue;
    for(i=0; i<n; i++){
        if(searchvalue == arr[i]){
            cout<<searchvalue<<" found in index "<<i;
            break;
        }
    }
    if(i>=n){
        cout<<searchvalue<<" not found.";
    }

}

int main(){
    get_values();
    linear_search();

    return 0;
}