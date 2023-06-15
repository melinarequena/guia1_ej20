#include "EX20.h"

int main() {

    List * list = newList();
    Stack * stack = newStack();
    Queue * queue = newQueue();

    enlist(list, newNode(1));
    enlist(list, newNode(2));
    enlist(list, newNode(3));
    enlist(list, newNode(4));

    printList(list);

    pile(stack, listOut(list));
    pile(stack, listOut(list));
    pile(stack, listOut(list));
    pile(stack, listOut(list));

    printStack(stack);

    enqueue(queue, stackOut(stack));
    enqueue(queue, stackOut(stack));
    enqueue(queue, stackOut(stack));

    printQueue(queue);
    return 0;
}
