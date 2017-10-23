#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    int size;
    struct queue* next;
};

struct queue*
makeQueue(int data);

struct queue*
pushQueue(struct queue* queue, int data);

void
popQueue(struct queue* q);

int
main(int argc, char* argv[]){

    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    struct queue* queue = makeQueue(num);
    struct queue* head = queue;
    printf("The data in the queue is %d\n",queue->data);
    printf("Keep inserting data...\n");

    while(scanf("%d",&num)==1){
        queue = pushQueue(queue,num);
    }
    popQueue(head);

    return 0;
}

struct queue*
makeQueue(int data){
    struct queue* q = malloc(sizeof(q));
    if(q == NULL){
        printf("Failure\n");
        exit(1);
    }
    q->size = 1;
    q->data = data;
    q->next = NULL;
    return q;
}

struct queue*
pushQueue(struct queue* queue, int data){
    struct queue* q = malloc(sizeof(*q));
    if(q == NULL){
        printf("Failure\n");
    }
    q->size = queue->size + 1;
    q->data = data;
    queue->next = q;
    return q;
}

void
popQueue(struct queue* q){
    if(q == NULL){
        printf("Queue empty");
        exit(1);
    }
    while(q != NULL){
        printf("First in first out, so data is %d and order entered is %d\n",
                q->data, q->size);
        q = q->next;
    }

}
