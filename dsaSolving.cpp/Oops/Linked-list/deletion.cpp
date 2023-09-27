#include<iostream>
// #include"class.h"
#include"implement.cpp"
using namespace std;

/*
    deletion at particular position have O(k) time complexity and O(1) Auxilary-space.
*/
void deleteNode(Node* &head,Node* &tail, int pos){
        //if first Node need to be deleted---
        if(pos==1){
            Node* temp= head;
            head= head->next;
            temp->next= NULL;
            delete temp;
            return;
        }else{
            //other cases isse handle ho jaege ---from 2nd node to last node we can delete using this ---
            Node* prev= NULL;
            Node* cur= head;
            int ct=1;

            while(ct<pos){
                prev= cur;
                cur= cur->next;
                ct++;
            }// iss loop se hm uss node tak pahuch jaege jise  hme delete krna hai--

            prev->next= cur->next;
            cur->next= NULL;
            delete cur;
            //agr last node delete hua to tail ko bhi update krna padega--
            if(prev->next==NULL){
                tail= prev;
            }
        }
}
/*
    to run the code comment int main() part of implement.cpp--- or else
    reassign of int main() occurs which leads to complile time error
*/
int main(){
 Node* node1= new Node(12);
Node* head= node1;
Node* tail= node1;

int n;
cin>>n;
for(int i=0; i<n; i++){
    int x;
    cin>>x;
    insertAtHead(head,x);
}
print(head);
deleteNode(head,tail,6);
print(head);
cout<<tail->data<<" "<<tail->next<<endl;
deleteNode(head,tail, 5);
print(head);
cout<<tail->data<<" "<<tail->next<<endl;
return 0;
}