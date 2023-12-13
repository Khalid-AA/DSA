/*
----Includes functions that will be used in multiple other files.----

A file saved with 'h' file extension is a header file used in C/C++ files to include 
the declaration of variables, constants, and functions. These are referred by the C++ 
implementation files that contain the actual implementation of these functions.

WHY USE HEADER FILES?
Header files are used in C++ so that you don’t have to write the code for every single thing. 
It helps to reduce the complexity and number of lines of code. It also gives you the benefit of 
reusing the functions that are declared in header files to different '.cpp' files and including a 
header file is way easier than writing the implementations.

*/


#include <iostream>
#define max_size 50
using namespace std;

int arr[max_size], i, n, j;

void get_values(){
    // Inserting into an empty array / Creating an array
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
}

void display(){
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void sorting(){  // INSERTION SORT: for details check "insertion_sort.cpp" file
	for(i=1; i<n; i++){
		j = i;
		while(arr[j]<arr[j-1]){
			swap(arr[j], arr[j-1]);
			j--;
		}
	}
}
