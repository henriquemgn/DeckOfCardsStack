#include<iostream>
#include<stdio.h>
#define MAX 53
#include "deck.cpp"

struct Stack
{
    int top;
    Card data[MAX];
};

typedef struct Stack STACK;

void pushstack(STACK *s, Card item)
{
    if (s -> top == MAX-1){
        std::cout << ("\n Stack Overflow");
        return;
    }
    s -> data[++s->top] = item;
}

Card popstack(STACK *s)
{
    if (s->top == -1)
    {
        std::cout << ("Stack Underflow");
    }
    return (s->data[s->top--]);
}

void pushstack(STACK *,Card);       // push pilha
Card popstack(STACK *);             // pop pilha
