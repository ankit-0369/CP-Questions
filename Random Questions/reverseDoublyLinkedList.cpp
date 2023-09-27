#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev=NULL;
    Node* next= NULL;
    Node(int d){
        this->data= d;
        this->prev= NULL;
        this->next= NULL;

    }
    ~Node(){
        cout<<"deleted data: "<<this->data<<endl;
        delete this;
    }
};

void insertAthead(Node* &head, int d){
    Node* temp= new Node(d);
    head->prev= temp;
    temp->next= head;
    head= temp;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
}



int main(){
 Node* head= new Node(5);
 int n;
 cin>>n;

 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    insertAthead(head,x);
 }

return 0;
}