#include<stdio.h>
#include<conio.h>

struct myStack{
    int *arr;
    int cap;
    int top;
    myStack(int c){
        cap=c;
        arr= new int[cap];
        top= -1;
    }

    void push(int x){
        if(top==cap-1){
            printf("Overflow\n");
            return;
        }
        top++;
        arr[top]= x;
        return;
    }

    int pop(){
        if(top==-1){
            printf("Underflow\n");
            return -1;
        }
        top--;
        int res= arr[top];

        return res;

    }

    int peek(){
        return arr[top];
    }
    int size(){

        return top+1;
    }
    bool isEmpty(){

        return (top==-1);
    }
};

int main(){
    myStack s(6);
    s.push(34);
    s.push(35);
    s.push(36);
    s.push(37);
    s.push(38);
    s.push(39);
    printf("%d",s.size());
    printf("\n%d", s.peek());

    return 0;
}