#include <stdio.h>

#define NUM_ITEMS 5
#define CONTAINER_CAPACITY 10

int items[NUM_ITEMS] = {7, 3, 5, 2, 6};
int containers[NUM_ITEMS];

void packItems() {
    int i, j, containerIndex = 0, remainingCapacity = CONTAINER_CAPACITY;

    for (i = 0; i < NUM_ITEMS; i++) {
        if (items[i] <= remainingCapacity) {
            containers[i] = containerIndex;
            remainingCapacity -= items[i];
        } else {
            containerIndex++;
            containers[i] = containerIndex;
            remainingCapacity = CONTAINER_CAPACITY - items[i];
        }
    }
}

void printSolution() {
    int i;
    printf("Item\tContainer\n");
    for (i = 0; i < NUM_ITEMS; i++) {
        printf("%d\t%d\n", i + 1, containers[i] + 1);
    }
}

int main() {
    packItems();
    printSolution();
    return 0;
}
