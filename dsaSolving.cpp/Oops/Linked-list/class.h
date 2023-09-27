#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next= NULL;
    }

    ~Node(){
        int value= this->data;
        cout<<"value of deleted  node: "<<value<<endl;
       if(this->next!= NULL){
        delete next;
        this->next= NULL;
       }
    }
};


