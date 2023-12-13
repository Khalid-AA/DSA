#include <iostream>
using namespace std;

/*
Definition: The Fibonacci sequence is a series of numbers in which each number is the 
            sum of the two preceding ones, usually starting with 0 and 1.
Example: 0,1,1,2,3,5,8,13,21,…
*/

int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main(){
	int n;
	cout<<"Enter the number of term you want: ";
	cin>>n;
    while(n<0){
        cout<<"The number of terms should be a positive number. Try again: ";
        cin>>n;
    }
	for(int i=0; i<n; i++){
		cout<<fibonacci(i)<<" ";
	}
	
	return 0;
}