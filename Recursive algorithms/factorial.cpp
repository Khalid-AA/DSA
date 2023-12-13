#include <iostream>
using namespace std;

/*
Definition: The factorial of a non-negative integer n, denoted as n!, is the product of all 
            positive integers less than or equal to n.
Example: 5!=5×4×3×2×1=120.

*/

int factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}

int main(){
	int n;
	cout<<"Enter a positive number: ";
	cin>>n;
    while(n<0){
        cout<<"You should enter a positive number. Try again: ";
	    cin>>n;
    }
    cout<<n<<" factorial is: "<<factorial(n);
    
	return 0;
}