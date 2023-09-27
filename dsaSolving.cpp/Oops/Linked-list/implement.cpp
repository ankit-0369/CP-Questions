#include<iostream>
#include"class.h"

#include"loopDetection.cpp"


using namespace std;

/*
    insertion from head and tail have O(1) time complexity and auxilary-space.
    insertion at any particular position have o(k), where k->position,  time complexity and O(1) Auxilary space.
*/

//to insert new node--- New node will be inserted from top position
void insertAtHead(Node* &head, int d){
        Node* temp= new Node(d);
        
        temp->next= head;
          
        head= temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);//temp bnakr data dala
    tail->next= temp;
    tail= temp;

}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    //If insertion need to be at start position
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    int ct=1;
    Node* temp= head;
    while(ct<pos-1){
        temp= temp->next;
        ct++;
    }

    //if Insert need to be at tail position
    if(temp->next== NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* NodeToBeInsert= new Node(d);
    NodeToBeInsert->next= temp->next;
    temp->next= NodeToBeInsert;

}

void print(Node* &head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
       temp= temp->next;
    }
    cout<<endl;
}

int main(){
 Node *node1= new Node(15); //dynamic allocation of new object
 Node* head= node1;
 Node* tail= node1;
// Node* head= new Node(45);
int n;
cin>>n;
for(int i=0; i<n; i++){
    int x,option;
    //Enter 1 if inserted from head and 0 if inserted from tail---
    cin>>x>>option;
    if(option){
        insertAtHead(head,x);
    }else
    insertAtTail(tail,x);

}
//to insert at particular position--
int pos= 3, d= 45;
insertAtPosition(head,tail,pos,d);

print(head);
head->next->next->next->next= head->next;
removeLoop(head);
print(head);
return 0;
}