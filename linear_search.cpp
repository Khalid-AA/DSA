#include "A_header_file.h"

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
    getvalues();
    linear_search();

    return 0;
}