#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100


struct Queue {
    int front, rear;
    int capacity;
    int* array;
};

struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

void enqueue(struct Queue* queue, int item) {
    if (queue->rear == queue->capacity - 1) {
        fprintf(stderr, "Queue is full\n");
        return;
    }
    if (queue->front == -1)
        queue->front = 0;
    queue->rear++;
    queue->array[queue->rear] = item;
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        fprintf(stderr, "Queue is empty\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front++;
    if (queue->front > queue->rear)
        queue->front = queue->rear = -1;
    return item;
}


void bfs(int graph[MAX_NODES][MAX_NODES], int start, int numNodes) {
    struct Queue* queue = createQueue(numNodes);
    int visited[MAX_NODES] = {0};

    
    visited[start] = 1;
    enqueue(queue, start);

    printf("Breadth-First Search starting from node %d: ", start);

    while (!isEmpty(queue)) {
        int current = dequeue(queue);
        printf("%d ", current);

        for (int i = 0; i < numNodes; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }

    printf("\n");

    free(queue->array);
    free(queue);
}

int main() {
    int numNodes, startNode;

    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &numNodes);

    int graph[MAX_NODES][MAX_NODES];

    printf("Enter the adjacency matrix for the graph:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting node for BFS: ");
    scanf("%d", &startNode);

    if (startNode < 0 || startNode >= numNodes) {
        fprintf(stderr, "Invalid starting node\n");
        return 1;
    }

    bfs(graph, startNode, numNodes);

    return 0;
}