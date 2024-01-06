/*

LINKED LIST
-> A linked list is a linear dynamic data structure to store data items. 
-> Linked list does not store data items in contiguous memory locations.
-> A linked list consists of items called “Nodes” which contain two parts. 
   The first part stores the actual data and the second part has a pointer 
   that points to the next node. This structure is usually called “Singly linked list”.

*/

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    public:
        node(){} // Constructor
};

class Linkedlist{
    node *head, *tail;
    public:
        Linkedlist(){ // Constructor
            head = tail = NULL;
        }

        void get_values(int item){
            node *initial_node = new node(); // Generating node
            initial_node -> data = item;
            initial_node -> next = NULL;

            if (head == NULL){
                head = initial_node;
                tail = initial_node;
            }

            else{
                tail -> next = initial_node;
                tail = initial_node;
            }
        }

        void inserting_new_node(){
            // Inserting without a linked list existing, throws an empty error
            if (head == NULL){
                cout<<"Linked List empty.";
                return;
            }

            // If linked list exists, get the item and the index to insert then insert
            else{
                int i, pos, item;
                cout<<"Enter the element: ";
                cin>>item;

                node *new_node = new node();
                new_node -> data = item;
                new_node -> next = NULL;

                cout<<"Enter the index(position) to insert: ";
                cin>>pos;

                node *current, *previous;
                current = head;

                // Searching for the position
                for(i=0; i<pos; i++){
                    previous = current;
                    current = current -> next;
                }

                // Inserting at the first position
                if (current == head){ 
                    new_node -> next = current;
                    head = new_node;
                }

                // Inserting at any other position
                else{
                    previous -> next = new_node;
                    new_node -> next = current;
                }
                cout<<"The new linked list is: ";
                display();
            }
        }

        void deleting_node(){
            // Linked list doesn't exist, thus can't delete...
            if (head == NULL){
                cout<<"Linked List. Nothing to delete";
                return;
            }

            // Find the position to delete, then delete
            else{
                int i, pos;
                cout<<"Enter the index(position) to delete: ";
                cin>>pos;

                node *current, *previous;
                current = head;
                for (i=0; i<pos; i++){
                    previous = current;
                    current = current -> next;
                }
                
                // Deleting at the first position
                if (current == head){ 
                    head = head -> next;
                }

                // Deleting at any other position
                else{
                    previous -> next = current -> next;
                }
                cout<<"The new linked list is: ";
                display();
            }
        }

        // Checking if a value is found in the linked list.
        void check(){
            if (head == NULL){
                cout<<"Linked List empty.";
                return;
            }
            
            else{
                int search_value;
                cout<<"Enter the value to search: ";
                cin>>search_value;

                node *temp = head;
                while(temp!=NULL){
                    if(temp->data == search_value){
                        cout<<search_value<<" is in the linked list.";
                        break;
                    }
                    else{
                        temp = temp -> next;
                    }
                    if(temp == NULL){
                        cout<<search_value<<" is not in the linked list.";
                    }
                }
            }

        }

        void display(){
            if (head == NULL){
                cout<<"Linked List empty.";
                return;
            }

            else{
                node *first = head; // The first node
                while(first != NULL){
                    cout<<first -> data<<" ";
                    first = first -> next;
                }
            }
        }
};

int main(){
    Linkedlist l; // l -> object
    int option;
    int i, n, item;
    while(true){
        cout<<"\n\n=======Menu======= \n1. Enter elements.\
        \n2. Insert an element.\
        \n3. Delete an element.\
        \n4. Check presence of an element.\
        \n5. Display.\
        \n6. Exit.\
        \n\n";
        cin>>option;

        if(option == 1){
            cout<<"Enter the number of elements: ";
            cin>>n;
            cout<<"Enter the elements: "<<endl;
            for(i=0; i<n; i++){
                cin>>item;
                l.get_values(item);
            }
            cout<<"Elements entered.";
        }

        else if (option == 2){
            l.inserting_new_node();
        }

        else if (option == 3){
            l.deleting_node();
        }

        else if (option == 4){
            l.check();
        }

        else if (option == 5){
            l.display();
        }
        
        else if (option == 6){
            break;
        }

        else{
            cout<<"Invalid option.";
        }
    }
    
    return 0;
}