/*

QUEUES
-> A data structure that follows the First In, First Out (FIFO) principle. In queue, the elements that
   that was inserted first will be extracted first.
-> Front is the element placed at the first position and Rear is the element placed at the last position. 
-> The insertion of the elements takes place at the Rear end and the deletion is performed from the Front. 

Primary operations on a queue are:
-> Initially set the values of Front and Rear to -1.
-> Enqueue: Adding an element to the end of the queue.
    Steps of Enqueue operation:−
    Step 1 − Checks if the queue is full.
    Step 2 − If the queue is full, produces an error and exit.
    Step 3 − If the queue is not full, for the first element set value of Front to 0.
    Step 4 − Increase the Rear index by 1, then add the new element in the position pointed to by Rear.
	
-> Dequeue: Removing an element from the front of the queue.
    Steps of Dequeue operation:−
    Step 1 − Checks if the queue is empty.
    Step 2 − If the queue is empty, produces an error and exit.
    Step 3 − If the queue is not empty, return the value pointed by Front.
    Step 4 − Increase the Front index by 1.
    Step 5 − For the last element, reset the values of Front and Rear to -1

NB:- In the code below I am working with integers, in case there is need for other 
     data types, do the changes accordingly e.g., for string: changes the occurrences 
     of 'int' to 'str' like 'str dequeue(){}'

*/

#include<iostream>
#define max_size 50
using namespace std;


class Queue{
    int front, rear;
    int arr[max_size];
    
    public:
        Queue(){ // Constructor
            front = rear = -1;
        }

        void enqueue(int item){
            if(rear == max_size-1){
                cout<<"Queue Overflow.";
            }
            else{
                if(rear==-1){ // inserting for the first time
                    front++;
                    rear++;
                    arr[rear] = item;
                }
                else{ // inserting afterwards
                    rear++;
                    arr[rear] = item;
                }
            }
        }

        int dequeue(){
            if(rear==-1 && front==-1){
                cout<<"Queue Underflow.";
                return 0;
            }
            else{
                if(rear == front){ // removing the last element
                    int value = arr[front];
                    front = rear = -1; // reseting to -1 
                    return value;
                }
                else{
                    int value = arr[front];
                    front++;
                    return value;
                }
            }
        }

        void display(){
            cout<<"The elements are: ";
            while(front!=-1){
                cout<<dequeue()<<" ";
            }
        }
};

int main(){
    Queue q; // q -> object
    int i, n, item;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(i=0; i<n; i++){
        cin>>item;
        q.enqueue(item);
    }
    q.display();

    return 0;
}