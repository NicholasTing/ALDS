/**
  * Coded by: Jing Kun Ting
  *
  */

#include <stdio.h>
#include <stdlib.h>

#define HT_SIZE 13


void
initializeHT(int A[]);

void
hashTable(int A[], int num);

void
printHT(int A[]);

int
main(int argc, char* argv[]){
    int A[HT_SIZE];
    initializeHT(A);
    printf("Hash Table\n");

    int num;
    printf("Enter number to hash...\n");
    while(scanf("%d",&num)==1){
        hashTable(A,num);
        printHT(A);
        printf("Enter more numbers to hash...\n");
    }


    return 0;
}

void
initializeHT(int A[]){

    //Initalize all the empty values to -1
    for(int i = 0;i < HT_SIZE;i++){
        A[i] = -1;
    }
}


void
hashTable(int A[], int num){

    //Has a basic hash function
    int hash_value;
    hash_value = (num * 93) % 13;
    A[hash_value] = num;

}

void
printHT(int A[]){
    for(int i = 0;i < HT_SIZE; i++){
        printf("Hash key: %d Hash value: %d\n", i, A[i]);
    }
    printf("\n");
}
