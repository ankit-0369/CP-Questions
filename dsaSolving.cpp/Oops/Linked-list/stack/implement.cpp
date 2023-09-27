#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    int* arr;

    Stack(int size){
        arr= new int[size];
        this->size= size;
        top= -1;

    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top]= data;

        }else{
            cout<<"stackOverFlow\n";
        }
    }

    void pop(){
        if(top==-1)
        {
            cout<<"stackUnderFlow, no element to delete\n";
        }

        top--;
    }

    bool isEmpty();
    int getSize();
    int getTop();

};


bool Stack::isEmpty(){
    if(top==-1)
    return true;
    return false;
}

int Stack::getSize(){
    return top+1;
}
int Stack:: getTop(){
    if(top==-1)
    {
        cout<<"stack is empty\n";
        
    }else
    return arr[top];
}

int main(){
 //creation---
//  stack<int> st;//stl inbuilt data structure--
 //operations----
 Stack st(10);
 st.push(30);
 st.push(50);
 st.push(40);
 st.push(60);

 st.pop();//delete top most element---

 cout<<st.getTop()<<"\n";//return top element---
 if(st.isEmpty())
 cout<<"stack is empty\n";
 else
 cout<<"stack not empty\n";

return 0;
}