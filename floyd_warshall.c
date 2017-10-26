/**
  * Coded by: Jing Kun Ting
  * Revision for exam
  *
  *
  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main(int argc, char* argv[]){
    int num_inputs, num_vertices;
    int curr_input = 0;
    int src, dest, weight;
    double inf = INFINITY;

    printf("Enter number of inputs: \n");
    scanf("%d", &num_inputs);

    printf("Enter number of vertices: \n");
    scanf("%d", &num_vertices);

    //Create a graph
    int graph[num_vertices][num_vertices];

    for(int i = 0;i < num_vertices; i++){
        for(int j = 0;j <num_vertices;j++){
            if(i == j){
                graph[i][j] = 0;
            }
            else{
                graph[i][j] = 99999;
            }
        }
    }

    printf("Enter data: \n");

    while(curr_input < num_inputs){
        scanf("%d %d %d",&src,&dest,&weight);
        graph[src][dest] = weight;
        curr_input++;
    }

    for(int i = 0;i < num_vertices; i++){
        for(int j = 0;j <num_vertices;j++){
            printf("%05d ", graph[i][j]);
        }
        printf("\n");
    }

    //FLOYD WARSHALL version 1
    printf("Floyd Warshall Algorithm\n");
    printf("==========================\n");
    for(int i = 0; i < num_vertices; i++){
        for(int s = 0; s < num_vertices; s++){
            for(int t = 0; t < num_vertices; t++){
                if(graph[s][i] + graph[i][t] < graph[s][t]){
                    graph[s][t] = graph[s][i] + graph[i][t];
                }
            }
        }
    }
    printf("==========================\n");
    for(int i = 0;i < num_vertices; i++){
        for(int j = 0;j <num_vertices;j++){
            printf("%05d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
