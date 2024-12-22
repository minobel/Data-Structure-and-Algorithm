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
    Node* Temp = new Node(data); //Creating a Temp Node which wants to add at Tail
  
    Tail -> next = Temp; //Connect the Tail next with Temp Node
    
    Tail = Temp; //Update the Tail
    
    /* For Example For 1st pass 
    Tail = 10
    Temp = 15 and Nullptr
    now add Tail next to Temp and Update Tail.
    Now, Tail = 15 */
}

bool CycleDetect( Node* Head){
    if( Head == NULL ){
        return false;
    }
    map< Node* , bool> Visited;
    Node* Temp = Head;
    while( Temp != NULL ){
        if( Visited[Temp] == true){
            cout << "Cycle is presented at: " << Temp -> data << endl;
            return true;
        }
        Visited[Temp] = true;
        Temp = Temp -> next;
    }
    return false;
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
    InsertAtTail( Tail , 17 );
    Tail -> next = Head -> next;
  
    //PrintLL(Head);
    if( CycleDetect(Head)){
        cout << "Cycle Is Present" << endl;
    }
    else 
    cout << "Cycle Isn't Present" << endl;
}
