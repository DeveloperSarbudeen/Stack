#include<iostream>
#define MAX 6
using namespace std;

int size = 0;
struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

int isFull(st *s) {
    if(s->top == MAX - 1) {
        return 1;
    }
    return 0;
}

int isEmpty(st *s) {
    if(s->top == -1) {
        return 1;
    }
    return 0;
}

void insertItem(st *s, int newValue) {
    if(isFull(s))
    {
        cout<<"\nStack is full";
    } else {
        s->top++;
        s->items[s->top] = newValue;
        size++;
    }
}

void deleteItem(st *s) {
    if(isEmpty(s))
    {
        cout<<"\nStack is empty";
    } else {
        s->top--;
        size--;
    }
}

void printStack(st *s)
{
    cout<<"\nStack Items\n";
    for(int i=0; i<size; i++)
    {
        cout<<s->items[i]<<" ";
    }
}

int main()
{
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);
    insertItem(s, 45);
    insertItem(s, 32);
    insertItem(s, 12);
    insertItem(s, 100);
    insertItem(s, 98);
    deleteItem(s);
    insertItem(s, 52);
    insertItem(s, 89);
    insertItem(s, 73);
    printStack(s); 
    return 0;
}