#include <stdio.h>
#include <stdlib.h>

struct pair {
    int x;
    int y;
};

static void update(int *p, struct pair *q)
{
    *p += 10;
    q->y = *p;
}

int main(void)
{
    int a[4] = {10, 20, 30, 40};
    int *p = a;
    int **pp = &p;

    struct pair local = {1, 2};
    struct pair *heap = malloc(sizeof *heap);
    if (heap == NULL)
        return 1;

    heap->x = 5;
    heap->y = 6;

    update(&a[1], heap);

    printf("%d %d %d\n", *p, *(*pp + 1), heap->y);
    printf("local = {%d, %d}\n", local.x, local.y);

    struct pair *objects = malloc(100 * sizeof *objects);
    if (objects == NULL) {
    	free(heap);
    	return 1;
    }

    for (int i = 0; i < 100; i++) {
    	objects[i].x = i;
    	objects[i].y = 2 * i;
    }

    free(objects);

    free(heap);
    return 0;
}
