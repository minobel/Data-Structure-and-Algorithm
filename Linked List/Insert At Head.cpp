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
//Insert At Head TC : O(1)
void InsertAtHead( Node* &Head, int data){
    Node* Temp = new Node(data); //Creating a Temp Node which contains new Head Data(Data = 11).
  
    Temp -> next = Head; //Initially Temp(11) Next is NULL.So connect it with Previous Head(10).
  
    Head = Temp; //Now Update the Head. Now Temp(11) is the Head.
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
    Node* Head = new Node(10);
  
    cout << "Head Value: " << Head -> data << endl;
  
    cout << "Head Next Address: " << Head -> next << endl;
  
    InsertAtHead( Head , 11 ); //Now wants to Pass 11 as a Head.
  
    cout << "New Head Value: " << Head -> data << endl; // Now Head 11.
  
    PrintLL(Head);
}
