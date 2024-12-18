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
int main(){
    Node* Node1 = new Node(10); //Creating a Node1 at Heap Memory
    cout << Node1 -> data << endl;
    cout << Node1 -> next << endl;
}
