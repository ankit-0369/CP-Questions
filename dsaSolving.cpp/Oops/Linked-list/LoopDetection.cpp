

#include<bits/stdc++.h>
#include"class.h"

using namespace std;


    
    // class Node {
    //     public :

    //     int data;
    //     Node *next;

    //     Node(int data) {
    //         this -> data = data;
    //         this -> next = NULL;
    //     }
    // };



Node* FloydAlgo(Node* head){
    if(head== NULL)
    return head;
        Node* slow= head;
        Node* fast= head;
        while(fast!= NULL && fast->next!= NULL){
            fast= fast->next->next;
            slow= slow->next;

            if(slow== fast)
            return slow;
        }

        return NULL;
}

Node* cutPointNode(Node* head){
    Node* pointAfterFloyd= FloydAlgo(head);
    if(pointAfterFloyd==NULL){
        return NULL;
    }

    Node* slow= head;
    while(slow!= pointAfterFloyd){
        if(slow == pointAfterFloyd){
            return slow;
        }
        slow= slow->next;
        pointAfterFloyd= pointAfterFloyd->next;
    }

    return NULL;
}

Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head==NULL)
       return NULL;
    Node* cutPoint= cutPointNode(head);
    
    Node* temp= cutPoint;
    while(temp->next!= cutPoint){
                temp= temp->next;
    }
    temp->next= NULL;

    return head;

}


