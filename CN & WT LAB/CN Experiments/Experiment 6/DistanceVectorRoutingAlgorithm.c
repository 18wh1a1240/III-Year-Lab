#include<stdio.h>

struct node {
    unsigned dist[25];
    unsigned from[25];
} routing_table[10];

int main() {
    int cost_matrix[25][25];
    int nodes, i, j, k, count = 0;

    printf("--------Distance Vector Routing Algorithm---------");
    printf("\nEnter the number of nodes : ");
    scanf("%d",&nodes);

    printf("\nEnter the cost matrix :\n");

    for(i = 0; i < nodes; i++) {
        for(j = 0; j < nodes; j++) {
            scanf("%d", &cost_matrix[i][j]);
            cost_matrix[i][i] = 0;
            routing_table[i].dist[j] = cost_matrix[i][j];
            routing_table[i].from[j] = j;
        }
    }
        do {
            count = 0;
            for(i = 0; i < nodes; i++)
                for(j = 0; j < nodes; j++)
                    for(k = 0; k < nodes; k++)
                        if(routing_table[i].dist[j]>cost_matrix[i][k]+routing_table[k].dist[j]) {
                            routing_table[i].dist[j]=routing_table[i].dist[k]+routing_table[k].dist[j];
                            routing_table[i].from[j]=k;
                            count++;
                        }
        } while(count != 0);

        for(i = 0; i < nodes; i++) {
            printf("\n\nFor router %d\n", i + 1);
            for(j = 0; j < nodes; j++) {
                printf("\t\nnode %d via %d Distance %d ", j + 1, routing_table[i].from[j]+1, routing_table[i].dist[j]);
            }
        }
    printf("\n\n");

}
