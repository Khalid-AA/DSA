/*

STACKS
-> A data structure that follows the Last In, First Out (LIFO) principle. In a stack, 
   elements are added and removed from the same end, often referred to as the "top" of the stack. 

Primary operations on a stack are:
-> Push: Adding an element to the top of the stack.
    Steps of Push operation:−
    Step 1 − Checks if the stack is full.
    Step 2 − If the stack is full, produces an error and exit.
    Step 3 − If the stack is not full, increments top to point next empty space.
    Step 4 − Adds data element to the stack location, where top is pointing.

-> Pop: Removing the element from the top of the stack.
    Steps of Pop operation:−
    Step 1 − Checks if the stack is empty.
    Step 2 − If the stack is empty, produces an error and exit.
    Step 3 − If the stack is not empty, accesses the data element at which top is pointing.
    Step 4 − Decreases the value of top by 1.

NB:- In the code below I am working with integers, in case there is need for other 
     data types, do the changes accordingly e.g., for string: changes the occurrences 
     of 'int' to 'str' like 'str pop(){}'

*/

#include<iostream>
#include <limits> // for numeric_limits
#include <typeinfo>
#define max_size 50
using namespace std;

class Stack{
    int top;
    int arr[max_size];

    public:
        Stack(){ // Constructor
            top = -1;
        }

        void push(int item){
            if(top == max_size-1){
                cout<<"Stack Overflow";
                return;
            }
            else{
                top++;
                arr[top]=item;
            }
        }

        int pop(){
            if(top == -1){
                cout<<"Stack Underflow";
                return 0;
            }
            else{
                int value = arr[top];
                top--;
                return value;
            }
        }

        void reverse(){ // Last entered elements outputted first e.g, INPUT: 1, 2, 3. OUTPUT: 3, 2, 1.
            int i, n, item;
            cout<<"Enter the number of elements: ";
            cin>>n;
            cout<<"Enter the elements: "<<endl;
            for(i=0; i<n; i++){
                cin>>item;
                push(item);
            }

            cout<<"The elements in reverse are: ";
            while(top!=-1){
                cout<<pop()<<" ";
            }
            cout<<endl<<endl;
        }

        void binary(){ // Outputs the binary values of a number
            int num, x;
            cout<<"Enter the number whose binary value you want to find: ";
            cin>>num;
            x = num;

            while(num>0){
                int remainder;
                remainder = num%2;
                push(remainder);
                num = num/2;
            }

            cout<<"The binary value of "<<x<<" is: ";
            while(top!=-1){
                cout<<pop()<<" ";
            }
            cout<<endl<<endl;
        }
};

// Checking if the user entered anything other than an integer...
int handle_ValueError(int invalidOption) {
    cout<<"Choose an integer: ";
    cin.clear(); // Clear error state
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    cin >> invalidOption; // Try reading input again
    return invalidOption;
}

int main() {
    Stack s; // s -> object
    int option;
    cout<<"\n=======Menu======= \n1. Reversed elements in an array.\n2. Binary of a number.\n\n";

    do {
        cout << "Choose either 1 or 2: ";
        if (!(cin >> option) || typeid(option) != typeid(int)) {
            option = handle_ValueError(option);
        }
    } while (option != 1 && option != 2);

    if (option == 1){
        s.reverse();
    }

    else{
        s.binary();
    }  
    return 0;
}
