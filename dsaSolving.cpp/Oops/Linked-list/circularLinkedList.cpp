#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data= d;
        this->next= NULL;
    }

    ~Node(){
        cout<<"Value of deleted Node: "<<this->data<<endl;
        if(this->next!= NULL){
            delete this;
        }
    }
};

void insertNode(Node* &tail, int element, int d){
    //if empty list givn---
    if(tail==NULL){
        Node* temp= new Node(d);
        tail= temp;
        temp->next= temp;
        
        return;
    }
    //other cases---
    Node* cur= tail;
    do{
         cur= cur->next;
         if(cur->next==tail){
            cout<<"Element Not found in given circular List\n";
            break;
         }
    }while(cur->data!= element);
   
    //cur is now at position where node to be inserted---
    Node* temp= new Node(d);
    temp->next= cur->next;
    cur->next= temp;
}

void print(Node*& tail){ //traversal
    Node* temp= tail;
    if(tail==NULL){
        // cout<<"ye check hua\n";
        cout<<"List is empty\n";
        return;
    }else{
            do{
            cout<<temp->data<<" ";
            temp= temp->next;
      }while(temp!=tail); 
      cout<<endl;   
    }
                                    
}

void deleteNode(Node* &tail, int ele){
        if(tail==NULL){
            cout<<"\nUnderFlow condition occurs\n";
            return;
        }
        Node* prev= tail;
        Node* temp= prev->next;
        while(temp->data!=ele){
            prev= temp;
            temp= temp->next;
            if(temp->next==tail){
                cout<<"Element Not found\n";
                break;
            }
        }
          prev->next= temp->next;
          if(temp==prev){// agr ek hi node hai tab tail ko NULL kr do -agr ye dono condn aage peche hua to it will throw exception
            tail= NULL;
        }else if(tail==temp){//agr ek se jyada hai tab tail ko prev kr do
            tail=prev;
        }
      
         temp->next= NULL;
        delete temp;
}

int main(){
 Node* tail=NULL;
 insertNode(tail,3,4);
 print(tail);
 insertNode(tail,4,2);
 print(tail);
 insertNode(tail,2,5);
 insertNode(tail,4,3);
 print(tail);
 insertNode(tail,3,45);
 print(tail);
 deleteNode(tail,4);
 print(tail);
return 0;
};