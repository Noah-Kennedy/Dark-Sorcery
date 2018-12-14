#include <stdio.h>

int main() {
    int x;
    int* y;

    scanf("%d", &x);

    printf("x is %d\n", x);

    if (x = 7) {
        int z = 5;
	y = &z;
	printf("y is %d\n", *y);
    }

    printf("y is %d\n", *y);
}
