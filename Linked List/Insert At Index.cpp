/* Linked List is 10 15 16. Now wants to put 18 at Index 2 */

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //Using Constructor for creating a Node

    Node(int data){
       this -> data = data;
       this -> next = NULL;
    }
};

//Insert At Tail TC : O(1)
void InsertAtTail( Node* &Tail , int data){

    Node* Temp = new Node(data); //Creating a Temp Node which wants to add in Tail

    Tail -> next = Temp; //Connect the Tail next with Temp Node
    
    Tail = Temp; //Update the Tail
    
    /* For Example For 1st pass 
    Tail = 10
    Temp = 15 and Nullptr
    now add Tail next to Temp and Update Tail.
    Now, Tail = 15 */
    
}

void InsertAtIndex( Node* Head , int data, int index){

    Node* Temp = Head; //Creat a copy of a Head which is Temp.

    for( int i = 0; i < index - 1; i++){

        Temp = Temp -> next; //Update Temp up to Index - 1. For Example, if we want to add at index 2 so we will go to index 1;

    }
    Node* NodeToInsert = new Node(data); //Creat a New Node which we wants to add. For example Node Value 18 wants to add.

    NodeToInsert -> next = Temp -> next; //For 10 15 16, Here 18 will be added at the middle of 15 and 16. So we will connect 18 next to Temp next(15). Here Temp Next(15) indicates 16 Address.Now we want to connect 18 and 16. So 18 next simply connects with 15 Next or Temp Next.

    Temp -> next = NodeToInsert; //Now we wants to connect 15 and 18 so simply 15 address or Temp Next will be the 18 address. SO connect 15 next or Temp Next to 18.
}

//Printing a Linked List. TC : O(N)

void PrintLL( Node* &Head){

    Node* Temp = Head; //Creating a Node Which Contains Head(11).
  
    //The loop will continue Untill Null.As We Know Last Node Next is Null.
  
    cout << "Linked List: ";

    while( Temp != NULL ){

        cout << Temp -> data << " "; //Print Current Node Value.
      
        Temp = Temp -> next; //Upadte Temp. Now Temp goes to Temp Next.
    }
    cout << endl;
}
int main(){
    Node* Node1 = new Node(10);
    
    Node* Head = Node1; //1st Node value 10,set as a Head.
    
    Node* Tail = Node1; //Its Single Node so set as a Tail also.
  
    cout << "Head Value: " << Head -> data << endl;
    
    cout << "Tail Value: " << Tail -> data << endl; //You can see also Head(10) as a Tail
 
    InsertAtTail( Tail , 15 ); //Now wants to Pass 15 as a Tail.
    
    cout << "New Tail Value: " << Tail -> data << endl; //Now Tail value 15
    
    InsertAtTail( Tail , 16 ); //Now wants to pass 16 as a Tail.
  
    cout << "New Tail Value: " << Tail -> data << endl; // Now Tail 16.

    InsertAtIndex(Head , 18 , 2); //Pass Head = 10, Data = 18 and Index = 2
  
    PrintLL(Head);
}
