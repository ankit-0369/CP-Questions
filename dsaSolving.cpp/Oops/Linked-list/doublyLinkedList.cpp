#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev=NULL;
    Node* next= NULL;
    //constructor definition--
    Node(int d){
        this->data= d;
        this->next= NULL;
        this->prev= NULL;
    }

    ~Node(){
        cout<<"Value of deleted Node: "<<this->data<<endl;
        if(this->next!= NULL){
            this->next= NULL;
            this->prev= NULL;
            delete this;
        }
    }
};

void print(Node* head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

    cout<<endl;
    return;
}

int getLength(Node* head){
    int ct=0;
    while(head!=NULL){
        ct++;
        head= head->next;
    }

    return ct;
}

void insertAtHead(Node* &head, int d){
    Node*temp= new Node(d);//new node created
    temp->next= head;
    head->prev= temp;
    head= temp;
    return;
}

 void insertAtTail(Node* &tail, int d){
        Node* temp= new Node(d);
        temp->prev= tail;
        tail->next= temp;
        tail= temp;

 }

 void insertAtPosition(Node* & head, Node* &tail, int pos, int d){
    Node* temp = head;
    int ct=1;
    if(pos<1 || pos>getLength(head)){
        cout<<"overflow/underflow condition----";
        return;
    }
    //if node to be inserted aat start position---
    if(pos==1){
        insertAtHead(head,d);
        return;
    }else{
        while(ct<pos-1){
        ct++;
        temp= temp->next;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp->next;
     temp->next->prev= nodeToInsert;
     temp->next= nodeToInsert;
    nodeToInsert->prev= temp;
    }
    
    return;
 }

 void deleteNode(Node* &head, Node* &tail, int pos){
    if(pos==1){
        Node* temp= head;
        temp->next->prev=NULL;
        head= temp->next;
        temp->next=NULL;
        delete temp;
    }else{
        int cnt=1;
        Node* prev=NULL;
        Node* cur= head;
        while(cnt<pos-1){
            prev= cur;
            cur= cur->next;
            cnt++;
        }
        cur->prev=NULL;
        prev->next= cur->next;
        cur->next= NULL;
        delete cur;
        if(prev->next==NULL){
            tail= prev;
        }

    }
 }

int main(){
 
 Node* node1= new Node(15);
 Node* head= node1;
 Node* tail= node1;
 print(head);
 insertAtHead(head, 23);
 insertAtHead(head,34);
 print(head);
 insertAtTail(tail,45);
    print(head);
    cout<<getLength(head)<<endl;
    
    insertAtPosition(head,tail,0,78);
    print(head);
    deleteNode(head,tail,4);
    cout<<tail->data<<" "<<tail->next<<" "<<tail->prev<<endl;
    print(head);
return 0;
}