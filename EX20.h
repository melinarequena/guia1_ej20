//
// Created by Administrador on 15/6/2023.
//

#ifndef GUIA1_EJ20_EX20_H
#define GUIA1_EJ20_EX20_H

typedef struct node{
    int data;
    struct node * next;
}Node;

typedef struct list{
    Node * header;
}List;

typedef struct stack{
    Node * top;
}Stack;

typedef struct queue{
    Node * head;
    Node * tail;
}Queue;

Node * newNode(int data);
List * newList();
Stack * newStack();
Queue * newQueue();

void enlist(List * list, Node * nodeToList);
Node * listOut(List * list);
void pile(Stack * stack, Node * nodeToPile);
Node * stackOut(Stack * stack);
void enqueue(Queue * queue, Node * nodeToQueue);
void printList(List * list);
void printStack(Stack * stack);
void printQueue(Queue * queue);



#endif //GUIA1_EJ20_EX20_H
