# Experiment 4

## Aim of the Experiment
To implement Dijsktra’s algorithm to compute the shortest path through a network

### Steps or procedure of Experiment
step 1: Create cost matrix C[ ][ ] from adjacency matrix adj[ ][ ]. C[i][j] is the cost of going
from vertex i to vertex j. If there is no edge between vertices i and j then C[i][j] is
infinity.

step 2:  Array visited[ ] is initialized to zero.

 for(i=0;i<n;i++)
 visited[i]=0;

step 3: If the vertex 0 is the source vertex then visited[0] is marked as 1.
step 4: Create the distance matrix, by storing the cost of vertices from vertex no. 0 to n-1
from the source vertex 0.
 for (i=1; i<n;i++)
 distance[i]=cost[0][i];
 Initially, distance of source vertex is taken as 0. i.e. distance[0]=0;

step 5: for(i=1;i<n;i++)
 – Choose a vertex w, such that distance[w] is minimum and visited[w] is 0.
 Mark visited[w] as 1.
 – Recalculate the shortest distance of remaining vertices from the source.

 – Only, the vertices not marked as 1 in array visited[ ] should be considered for
 recalculation of distance. i.e. for each vertex v

 if(visited[v]==0)
 distance[v]=min(distance[v],
 distance[w]+cost[w][v])

### Output
![output](DijkstrasAlgorithm.png)
