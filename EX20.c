//
// Created by Administrador on 15/6/2023.
//

#include "EX20.h"
#include <stdio.h>
#include <malloc.h>

Node *newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof (Node));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->data = data;
    aux->next = NULL;
    return aux;
}

List *newList() {
    List * aux = NULL;
    aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Errir\n");
        exit(-1);
    }
    aux->header = NULL;
    return aux;
}

Stack *newStack() {
    Stack * aux = NULL;
    aux = malloc(sizeof(Stack));
    if(aux == NULL){
        printf("Error\n");
        exit(-1);
    }
    aux->top = NULL;

    return aux;
}

Queue *newQueue() {
    Queue * aux = NULL;
    aux = malloc(sizeof(Queue));
    if(aux == NULL){
        printf("Error\n");
        exit(-1);
    }
    aux->head = NULL;
    aux->tail = NULL;
    return aux;
}

void enlist(List *list, Node *nodeToList) {
    if(list->header == NULL){
        list->header = nodeToList;
    }else{
        Node * aux = list->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = nodeToList;
    }
}

Node *listOut(List *list) {
    if(list->header == NULL){
        printf("Empty list\n");
        return NULL;
    }else{
        Node * out = list->header;
        list->header = list->header->next;
        out->next = NULL;
    }
}

void pile(Stack *stack, Node *nodeToPile) {
    if(stack->top == NULL){
        stack->top = nodeToPile;
    }else{
        nodeToPile->next = stack->top;
        stack->top = nodeToPile;
    }
}

Node *stackOut(Stack *stack) {
    if(stack->top == NULL){
        printf("Empty stack\n");
        return NULL;
    }else{
        Node * out = stack->top;
        stack->top = stack->top->next;
        out->next = NULL;
        return out;
    }
}

void enqueue(Queue *queue, Node *nodeToQueue) {
    if(queue->head == NULL){
        queue->head = nodeToQueue;
        queue->tail = nodeToQueue;
    }else{
        queue->tail->next = nodeToQueue;
        queue->tail = nodeToQueue;
    }
}

void printList(List *list) {
    Node * aux = list->header;
    printf("\nList:\n");
    while(aux != NULL){
        printf("%d -> ", aux->data);
        aux = aux->next;
    }
    printf("NULL\n");
}

void printStack(Stack *stack) {
    Node * aux = stack->top;
    printf("Stack:\n");
    while( aux != NULL){
        printf("%d\n", aux->data);
        aux = aux->next;
    }
    printf("NULL\n");
}

void printQueue(Queue *queue) {
    Node * aux = queue->head;
    printf("\nQueue\n");
    while(aux != NULL){
        printf("%d -> ", aux->data);
        aux = aux->next;
    }
    printf("NULL\n");
}
