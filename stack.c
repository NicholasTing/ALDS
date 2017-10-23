#include <stdio.h>
#include <stdlib.h>

struct stack{
    int data;
    int size;
    struct stack* next;
};

struct stack*
makeStack(int data);

struct stack*
push(struct stack* stack, int data);

void
pop(struct stack* stack);

int
main(int argc, char* argv[]){
    int i = 0;
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    struct stack* stack = makeStack(num);
    printf("The data in the stack is %d\n",stack->data);
    printf("Keep inserting data...\n");
    while(scanf("%d",&num)==1){
        stack = push(stack,num);
    }
    pop(stack);

    return 0;
}

struct stack*
makeStack(int data){
    struct stack* new_stack = malloc(sizeof(new_stack));
    new_stack->data = data;
    new_stack->size = 1;
    new_stack->next = NULL;
    return new_stack;
}

struct stack*
push(struct stack* stack,int data){
    if(stack==NULL){
        printf("Failure\n");
        exit(1);
    }
    struct stack* new_stack = malloc(sizeof(*new_stack));
    new_stack->next = stack;
    new_stack->data = data;
    new_stack->size = stack->size + 1;
    return new_stack;
}

void
pop(struct stack* stack){
    if(stack == NULL){
        printf("Failure");
        exit(1);
    }
    while(stack != NULL){
        printf("%d is the stack size and %d is the data in it.\n",
                stack->size, stack->data);
        stack = stack->next;
    }
}
