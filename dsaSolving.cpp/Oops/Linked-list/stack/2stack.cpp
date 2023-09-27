#include <iostream>

using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1, top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int x)
    {
        if (top2 - top1 == 1)
        {
            cout << "stack underFlow\n";
            return;
        }
        else
            top1++;
        arr[top1] = x;
    }

    void push2(int);
    void pop1(void);
    void pop2(void);
    

};

void Stack:: push2(int x){
    if(top2-top1==1){
        cout<<"stack OverFlow, no more space to push\n";
    }else{
        top2--;
        arr[top2]= x;
    }

    return;
}

void Stack:: pop1(){
        if(top1==-1)
        {
            cout<<"stack1 UnderFlow\n";
        }else{
            top1--;
        }
}

void Stack:: pop2(){
    if(top2==size)
    {
        cout<<"stack2 underFlow\n";
    }else{
        top2++;
    }
}

int main()
{
    Stack s(10);
    return 0;
}